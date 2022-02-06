#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {    
    int cx, cy, n;
    double curr;
    vector<double> minimums;
    int x, y, r;
    cin >> cx >> cy >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> r;
        curr = sqrt(pow(x-cx, 2) + pow(y-cy,2)) - r;
        minimums.push_back(curr);
    }

    sort(minimums.begin(), minimums.end());

    int ans = floor(minimums[2]);

    cout << max(0,ans);
}