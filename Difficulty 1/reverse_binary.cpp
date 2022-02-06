#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> digits;
    cin >> n;

    while (n > 0) {
        digits.push_back(n%2);
        n /= 2;
    }

    reverse(digits.begin(), digits.end());

    int ans = 0;

    for (int i = 0; i < digits.size(); i++) {
        ans += pow(2, i)*digits[i];
    }

    cout << ans;

}