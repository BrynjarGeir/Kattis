#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <tuple>
using namespace std;

double distance(tuple<int, double, double> a, tuple<int, double, double> b) {
    double x1 = get<1>(a), y1 = get<2>(a), x2 = get<1>(b), y2 = get<2>(b);
    double dist = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    return dist;
}

int main() {
    vector<tuple<int, double, double>> pattern;
    double pos;
    tuple<int, double, double> prev = make_tuple(-1,-1.0,-1.0);
    long double dist, curr_dist;

    for (double i = 0; i < 3; i++) {
        for (double j = 0; j < 3; j++) {
            cin >> pos;
            pattern.push_back(make_tuple(pos, i, j));
        }
    }

    sort(pattern.begin(), pattern.end());

    dist = 0;
    for(const tuple<int, double, double> p: pattern) {
        if (prev == make_tuple(-1,-1.0,-1.0)) {
            prev = p;
        } else {
            curr_dist = distance(prev, p);
            dist += curr_dist;
            prev = p;
        }
    }
    
    cout << fixed << dist;

}