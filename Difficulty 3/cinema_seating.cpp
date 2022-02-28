#include <iostream>
#include <set>
using namespace std;

int main() {
    int R, C, N, x, y;
    set<pair<int, int>> grid;
    cin >> R >> C;
    cin >> N;

    while(N--) {
        cin >> x >> y;
        grid.insert(make_pair(x,y));
    }

    for(int k = 0; k < 9; k++) {
        int neighbours = 0;
        for(pair<int, int> c: grid) {
            int curr_neighbors = 0;
            if(grid.find(make_pair(c.first-1,c.second-1)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first-1,c.second)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first-1,c.second+1)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first,c.second-1)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first,c.second+1)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first+1,c.second-1)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first+1,c.second)) != grid.end()) curr_neighbors++;
            if(grid.find(make_pair(c.first+1,c.second+1)) != grid.end()) curr_neighbors++;
            if(curr_neighbors == k) neighbours++;
        }
        cout << neighbours << " ";
    }
}