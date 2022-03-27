#include <iostream>
#include <math.h>
using namespace std;

#define pi M_PI

int main() {
    int N;
    double n, l, d, g, s;

    while(N-- && cin >> n >> l >> d >> g) {
        cout << 0.25 * n * l * l * (1/tan(pi/n)) + n * l * d * g + g*g*d*d*pi << endl;
    }
}