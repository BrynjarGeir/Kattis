#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T, c;
    cin >> T;

    while(T--) {
        cin >> c;
        double ans = 0;
        for(int i = 0; i < c; i++) ans += 0.5, ans *= 2;
        cout << (long long)ans << endl;
    }
}