#include <iostream>
#include <math.h>
#include <tuple>
#include <vector>
using namespace std;

double dist_center(int x, int y, int cx, int cy) {
    return sqrt(pow(x-cx,2) + pow(y-cy,2));
}

bool hits_circle(int x, int y, int cx, int cy, int r) {
    return r >= dist_center(x, y, cx, cy);
}

bool hits_rectangle(int x, int y, int x1, int y1, int x2, int y2) {
    return (x1 <= x && x <= x2 && y1 <= y && y <= y2);
}

int main() {
    int n, m, x1, x2, y1, y2, r, x, y, hits;
    string t;

    vector<tuple<int, int, int>> circ;
    vector<tuple<int, int, int, int>> rects;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> t;
        if (t == "rectangle") {
            cin >> x1 >> y1 >> x2 >> y2;
            rects.push_back(make_tuple(x1,y1,x2,y2));
        } else {
            cin >> x >> y >> r;
            circ.push_back(make_tuple(x, y, r));
        }
    }

    cin >> m;

    for(int j = 0; j < m; j++) {
        cin >> x >> y;
        hits = 0;
        for(tuple<int, int, int> p: circ) {
            int cx = get<0>(p), cy = get<1>(p), r = get<2>(p);
            if (hits_circle(x,y,cx,cy,r)) hits++;
        }
        for(tuple<int, int, int, int> p: rects) {
            int x1 = get<0>(p), y1 = get<1>(p), x2 = get<2>(p), y2 = get<3>(p);
            if (hits_rectangle(x,y,x1,y1,x2,y2)) hits++;
        }
        cout << hits << endl;


    }

}