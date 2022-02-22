#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<double> canisters;
    double n, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        canisters.push_back(c);
    }

    sort(canisters.begin(), canisters.end());
    double max_fraction = 1;
    c = 1;
    for(double i: canisters) {
        if (i > c) {
            cout << "impossible";
            return 0;
        } else {
            max_fraction = min(max_fraction, i / c);
        }

        c++;
    }

    cout << max_fraction;
}