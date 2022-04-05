#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

struct Node {
    int value = -1;
};

int main() {
    int N, Q, a, b;
    char command;
    cin >> N >> Q;

    map<int, set<int>> sets;

    for(int i = 0; i < Q; i++) {
        cin >> command >> a >> b;
        if(command == '=') {
            set<int> su = set_union(sets[a], sets[b]);
            sets[a] = su, sets[b] = su;
        } else {
            if(a == b) cout << "yes" << endl;
            else if(sets[a].find(b) != sets[a].end()) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}