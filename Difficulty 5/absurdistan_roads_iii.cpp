#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, a, b, c, d;
    map<int, vector<int>> mapping;
    map<pair<int, int>, int> count;
    map<int, pair<int, bool> > ans;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        mapping[a].push_back(b);
        mapping[b].push_back(a);

        c = min(a, b), d = max(a, b);

        count[{c, d}]++;
    }

    vector<pair<int, int>> size_key;

    for(auto x: mapping) size_key.emplace_back(x.second.size(), x.first);
    sort(size_key.begin(), size_key.end());

    for(auto s: size_key) {
        for(auto r: mapping[s.second]) {
            if(!ans[s.second].second && count[{min(r, s.second), max(r, s.second)}] > 0) {
                ans[r] = {s.second, r}; 
                count[{min(r, s.second), max(r, s.second)}]--;
                break;
            }
        }
    }

    for(auto a: ans) cout << a.first << " " << a.second.first << endl;
}