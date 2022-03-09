#include <iostream>
#include <vector>
using namespace std;

int main() {
    double l,w,n,r, x, y;
    bool UP, RIGHT, LEFT, DOWN;
    cin >> l >> w >> n >> r;

    pair<double, double> up = make_pair(0,w/2), right = make_pair(l/2, 0), down = make_pair(0, -w/2), left = make_pair(-l/2, 0);
    vector<pair<double, double>> cranes;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        cranes.push_back(make_pair(x,y));
    }

    for(int i = 0; i < n; i++) {
        
    }
}