#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, l, r, ml = 0, mr = 0;
    set<int> left, right;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        if(left.find(l) != left.end()) ml++;
        else left.insert(l);
        if(right.find(r) != right.end()) mr++;
        else right.insert(r);
    }

    cout << ml + mr;
}