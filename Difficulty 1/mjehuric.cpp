#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tmp, A, B, C, D, E;

    cin >> A >> B >> C >> D >> E;

    while (A != 1 || B != 2 || C != 3 || D != 4 || E != 5) {
        if ( A > B ) {
            tmp = A;
            A = B;
            B = tmp;
            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
        }

        if ( B > C ) {
            tmp = B;
            B = C;
            C = tmp;
            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
        }
        if ( C > D ) {
            tmp = C;
            C = D;
            D = tmp;
            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
        }

        if ( D > E ) {
            tmp = D;
            D = E;
            E = tmp;
            cout << A << " " << B << " " << C << " " << D << " " << E << endl;
        }

    }
}