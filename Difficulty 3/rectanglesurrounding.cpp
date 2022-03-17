#include <vector>
#include <set>
#include <unordered_map>
#include <tuple>
#include <iostream>
using namespace std;

int rectangleArea(vector<tuple<int, int, int, int>>& rectangles) {
    set<int> x,y; long long ans = 0;
    for(auto v:rectangles){
        x.insert(get<0>(v));x.insert(get<2>(v)); // store all unique x coordinates
        y.insert(get<1>(v));y.insert(get<3>(v)); // store all unique y coordinates
    }
    int index = 0; 
    unordered_map<int,int> coord_x,coord_y;
    for(auto it:x){
        coord_x[it] = index++; // assigning all unique x --> index
    }
    index = 0;
    for(auto it:y){
        coord_y[it] = index++; // assigning all unique x --> index
    }
    vector<int> x_val(x.begin(),x.end()); // store x coordinates in a vector
    vector<int> y_val(y.begin(),y.end()); // store y coordinates in a vector
    vector<vector<bool>> vis(x.size(),vector<bool>(y.size(),false));
    for(auto v:rectangles){
        for(auto start_x=coord_x[get<0>(v)];start_x<coord_x[get<2>(v)];start_x++){
            for(auto start_y=coord_y[get<1>(v)];start_y<coord_y[get<3>(v)];start_y++){
                if(!vis[start_x][start_y]){ // if current state hasn't been visited
                    long long width = x_val[start_x+1] - x_val[start_x];
                    long long height = y_val[start_y+1] - y_val[start_y];;
                    ans = (ans + (width*height));
                }
                vis[start_x][start_y] = true;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    
    while(cin >> n && n != 0) {
        int a, b, c, d;
        vector<tuple<int, int, int, int>> rectangles;
        for(int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            rectangles.push_back(make_tuple(a, b, c, d));
        }
        int ans = rectangleArea(rectangles);
        cout << ans << endl;
    }
}