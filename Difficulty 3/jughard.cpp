#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    long long a, b, d;
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> a >> b >> d;

        long long g = __gcd(a,b);

        if(d % g == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}