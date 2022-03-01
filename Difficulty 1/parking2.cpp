#include <iostream>
using namespace std;

int main() {
    int t, n, curr, min_p, max_p;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        min_p = 100, max_p = -1;
        for(int j = 0; j < n; j++)  {
            cin >> curr;
            min_p = min(min_p, curr);
            max_p = max(max_p, curr);
        }
        if (i != t-1) cout << 2 * (max_p - min_p) << endl;
        else cout << 2 * (max_p - min_p);
    }
}