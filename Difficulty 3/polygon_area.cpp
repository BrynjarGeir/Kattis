#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

pair<string, double> area(vector<pair<double, double>> p) {
    double each = 0, orientation = 0;

    for(int i = 1; i < p.size(); i++) {
        each += p[i-1].first*p[i].second - p[i-1].second*p[i].first;
        orientation += (p[i].first - p[i-1].first) * (p[i].second + p[i-1].second);
    }
    each += p.back().first*p.front().second - p.back().second*p.front().first;
    orientation += (p.front().first - p.back().first) * (p.front().second + p.back().second);
    if(each < 0) each = -each;
    each /= 2;
    if(orientation > 0) return make_pair("CW ", each);
    return make_pair("CCW ", each);
}

int main() {
    int points;
    cin >> points;

    cout << setprecision(1) << setiosflags(ios::fixed);

    while(points != 0) {
        double x,y;
        vector<pair<double, double>> p;
        for(int i = 0; i < points; i++) {
            cin >> x >> y;
            p.push_back(make_pair(x,y));
        }

        pair<string, double> ans = area(p);
        cout << ans.first << ans.second << endl;
        cin >> points;
    }
}