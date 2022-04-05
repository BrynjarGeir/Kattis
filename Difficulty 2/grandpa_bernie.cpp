#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q, year, kth;
    string country;
    map<string, vector<int>> trips;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> country >> year;
        trips[country].push_back(year);
    }

    for(auto c: trips) sort(trips[c.first].begin(), trips[c.first].end());

    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> country >> kth;
        cout << trips[country].at(kth-1) << endl;
    }
}