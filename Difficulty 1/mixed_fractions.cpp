#include <iostream>
using namespace std;

int main() {
    int n,d;
    while(cin >> n >> d && d != 0) {
        if(d > n) cout << 0 << " " << n << " / " << d << endl;
        else {
            int how_many = n / d;
            n -= how_many * d;
            cout << how_many << " " << n << " / " << d << endl;
        }
    }
}