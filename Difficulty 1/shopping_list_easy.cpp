#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, int> ingrs;
    string ingr;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ingr;
            ingrs[ingr]++;
        }
    }
    vector<string> in_all;
    for(auto p: ingrs) {
        if(p.second == n) in_all.push_back(p.first);
    }

    sort(in_all.begin(), in_all.end());

    cout << in_all.size() << endl;
    for(auto p: in_all) cout << p << endl;
}