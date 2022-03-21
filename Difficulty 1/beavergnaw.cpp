#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double D, V, d, pi;
    pi = M_PI;
    cout << fixed << setprecision(6);

    while(cin >> D >> V && (D != 0 || V != 0)) {
        d = cbrt(pow(D, 3) - (6/pi)*V);
        cout << d << endl;
    }
}