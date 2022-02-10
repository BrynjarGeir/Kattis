#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, min_number;
    string costume;
    map<string, int> costumes;
    vector<pair<int, string>> ans;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> costume;
        if (costumes.find(costume) == costumes.end()) {
            costumes[costume] = 0;
        } else {
            costumes[costume]++;
        }
    }

    for (const auto &p: costumes) {
        pair<int, string> a = make_pair(p.second, p.first);
        ans.push_back(a);
    }

    sort(ans.begin(), ans.end());

    min_number = ans[0].first;

    for (const auto p: ans) {
        if (p.first != min_number) break;
        cout << p.second << endl;
    }

}