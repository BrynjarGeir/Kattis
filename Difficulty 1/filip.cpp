#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, larger;

    cin >> A >> B;

    int a = A, b = B;
    larger = A;

    for (int i = 0; i < 3; i++) {
        if (a % 10 > b % 10) {
            larger = A;
            break;
        } else if (a % 10 < b % 10) {
            larger = B;
            break;
        } else {
            a /= 10;
            b /= 10;
        }
    }

    string ans = to_string(larger);

    cout << string(ans.rbegin(), ans.rend());
}