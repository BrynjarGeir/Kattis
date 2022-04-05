#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main() {
    int C, P, X, L, A, B;
    cin >> C >> P >> X >> L;

    map<int, set<int>> countries;
    map<int, int> initial_partnerships;

    for(int i = 0; i < P; i++) {
        cin >> A >> B;
        if(A != L) initial_partnerships[A]++;
        if(B != L) initial_partnerships[B]++;
        if(A != L && B != L) {
            countries[A].insert(B);
            countries[B].insert(A);
        }
    }

    bool change = true;
    while(change) {
        change = false;
        for(auto c: countries) {
            if(2 * c.second.size() < initial_partnerships[c.first]) {
                for(auto k: countries) {
                    if(k.first != c.first) k.second.erase(c.first);
                }
                change = true;
            }
        }
    }

    if(2 * countries[X].size() <= initial_partnerships[X]) cout << "leave";
    else cout << "stay";
    cout << endl;
    for(auto c: countries[X]) {cout << c << " ";}
    cout << endl;
    cout << countries[X].size() << " " << initial_partnerships[X];
}