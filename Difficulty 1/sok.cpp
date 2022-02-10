#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A, B, C, I, J, K;

    cin >> A >> B >> C;
    cin >> I >> J >> K;

    if (I == J && J == K) {
        cout << 0 << " " << 0 << " " << 0;
    } else {
        while( A > 0 && B > 0 && C > 0) {
            A -= I;
            B -= J;
            C -= K;
        }
        if (A < 0) A += I;
        if (B < 0) B += J;
        if (C < 0) C += K;
    }
}