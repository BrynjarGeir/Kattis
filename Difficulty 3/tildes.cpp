#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, q, a, b;
    cin >> n >> q;
    char t;
    vector<set<int>> groups;
    for(int i = 1; i <= n; i++) {
        groups.push_back({i});
    }
    for(int i = 0; i < q; i++) {
        cin >> t;
        if(t == 't') {
            cin >> a >> b;
            int fa, fb;
            for(int i = 0; i < groups.size(); i++) {
                if(groups[i].find(a) != groups[i].end()) fa = i;
                if(groups[i].find(b) != groups[i].end()) fb = i;
            }
            if(fa != fb) {
                groups[fa].insert(groups[fb].begin(), groups[fb].end());
                groups.erase(groups.begin() + fb);
            }
        }
        else {
            cin >> a;
            for(int i = 0; i < groups.size(); i++) {
                if(groups[i].find(a) != groups[i].end()) {
                    cout << groups[i].size() << endl;
                    break;
                }
            }
        }


    }
}