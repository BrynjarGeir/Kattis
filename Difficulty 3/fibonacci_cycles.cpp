#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q, k, f0, f1, curr, n, tmp;
    cin >> Q;

    while(Q--) {
        set<int> seen;
        cin >> k;
        f0 = 1, f1 = 1, n = 2;
        seen.insert(1);
        while(true) {
            curr = f0 + f1;
            if(seen.find(curr % k) != seen.end()) break;
            else seen.insert(curr % k);
            f0 = f1;
            f1 = curr;
            n++;
        }
        cout << n << endl;
    }
}