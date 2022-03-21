#include <iostream>
using namespace std;

int main() {
    double A, B, C, I, J, K;
    cin >> A >> B >> C >> I >> J >> K;

    while(A > 0 && B > 0 && C > 0) {
        A -= I, B -= J, C -= K;
    }

    if(A < 0 || B < 0 || C < 0) {
        A += I, B += J, C += K;
    }

    cout << A << " " << B << " " << C;
}