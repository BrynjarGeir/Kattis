#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int T, C;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> C;
        set<string> s;
        for (int j = 0; j < C; j++) {
            string c;

            cin >> c;
            s.insert(c);
        }
        cout << s.size() << endl;
    }

}