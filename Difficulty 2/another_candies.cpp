#include <iostream>
using namespace std;

int main() {
    int T, N, n;
    cin >> T;

    while(T--) {
        cin >> N;
        n = N;
        unsigned long long curr;
        int total = 0;
        while(n--) {
            cin >> curr;
            total += curr%N;
        }
        if(total % N == 0) cout << "YES";
        else cout << "NO";
        if(T != 0) cout << endl;
    }
}