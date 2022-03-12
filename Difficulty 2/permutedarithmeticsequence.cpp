#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    while(n--) {
        cin >> m;
        int seq[m], diff;
        bool arithm = true;
        cin >> seq[0] >> seq[1];
        diff = seq[1] - seq[0];
        for(int i = 2; i < m; i++) {
            cin >> seq[i];
            if(diff != seq[i] - seq[i-1]) {
                arithm = false;
                break;
            }
        }

        if(arithm) {
            cout << "arithmetic";
            if(n != 0) cout << endl;
            continue;
        }

        bool perm_arithm = true;
        sort(seq, seq+m);
        diff = seq[1] - seq[0];
        for(int i = 2; i < m; i++) {
            if(diff != seq[i] - seq[i-1]) {
                perm_arithm = false;
                break;
            }
        }

        if(perm_arithm) {
            cout << "permutated arithmetic";
            if(n != 0) cout << endl;
            continue;
        }

        cout << "non-arithmetic";
        if(n != 0) cout << endl;
    }
}