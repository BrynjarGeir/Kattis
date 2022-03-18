#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, cd, can_sell;

    while(cin >> N >> M && (N != 0 || M != 0)) {
        vector<int> ans, jack, jill;

        for(int i = 0; i < N; i++) {
            cin >> cd;
            jack.push_back(cd);
        }

        for(int i = 0; i < M; i++) {
            cin >> cd;
            jill.push_back(cd);
        }

        set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), back_inserter(ans));

        cout << ans.size() << endl;

    }
}