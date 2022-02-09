#include <iostream>
#include<math.h>
using namespace std;

double ngon_area(double n, double r) {
    return 0.5 * n * r * r * sin(2 * M_PI / n);
}

int main() {
    double tests, n, l, d, g;
    cin >> tests;

    for(int i = 0; i < tests; i++) {
        cin >> n >> l >> d >> g;
        l += d * g;
        cout << ngon_area(n, l);

    }
}