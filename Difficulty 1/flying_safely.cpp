#include <iostream>
using namespace std;

int main() {
    int T, n, m, a, b;
    cin >> T;
    while(T--) {
        cin >> n >> m;
        for(int i = 0; i < m; i++) {
            cin >> a >> b;
        }
        if(n > m) cout << m;
        else cout << n - 1;
        if(T != 0) cout << endl;
    }
}