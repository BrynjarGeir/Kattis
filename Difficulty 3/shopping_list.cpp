#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string w;

    vector<string> in_every;
    for(int i = 0; i < m; i++) {
        cin >> w;
        in_every.push_back(w);
    }

    for(int i = 1; i < n; i++) {
        vector<string> this_one;
        for(int j = 0; j < m; j++) {
            cin >> w;
            this_one.push_back(w);
        }

        for(string s: in_every) {
            if (find(this_one.begin(), this_one.end(), s) != this_one.end()) continue;
            else {
                int pos = find(in_every.begin(), in_every.end(), s) - in_every.begin();
                in_every.erase(in_every.begin() + pos);
            }
        }
    }

    cout << in_every.size() << endl;

    for(string s: in_every) {
        cout << s << endl;
    }
}