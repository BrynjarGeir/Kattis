#include <iostream>
using namespace std;

int main() {
    long p, q, s;
    cin >> p >> q >> s;
    
    for(int i = 1; i <= s; i++) {
        if(i % p == 0 && i % q == 0) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
}