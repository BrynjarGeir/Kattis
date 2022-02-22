#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

bool cmp(tuple<int, int, int>& a, tuple<int, int, int>& b) {
    if (get<0>(a) != get<0>(b)) {
        return get<0>(a) > get<0>(b);
    } else {
        return get<1>(a) < get<1>(b);
    }
}

int main() {
    int N, C, pos = 1, curr;
    map<int, pair<int, int>> ordering;
    
    cin >> N >> C;

    for(int i = 0; i < N; i++) {
        cin >> curr;
        if(ordering.find(curr) != ordering.end()) {
            ordering[curr].first++;
        } else {
            ordering[curr] = make_pair(1, pos);
            pos++;
        }
    }
    vector<tuple<int, int, int>> ans;
    map<int, pair<int, int>>::iterator it;
    for(it = ordering.begin(); it != ordering.end(); it++) {
        ans.push_back(make_tuple(it->second.first, it->second.second, it->first));
    }

    sort(ans.begin(), ans.end(), cmp);

    for(tuple<int, int, int> p: ans) {
        for(int i = 0; i < get<0>(p); i++) {
            cout << get<2>(p) << " ";
        }
    }
}