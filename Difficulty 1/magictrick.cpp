#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    set<char> s;
    string str;

    cin >> str;

    for (char c: str) {
        s.insert(c);
    }

    if (s.size() == str.size()) {
        cout << 1;
    } else {
        cout << 0;
    }
}