#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

double cot(double x) {
    return 1 / tan(x);
}

double angle_expansion(double d, double g) {
    return g*g*d*d*M_PI;
}

double side_expansion(double n, double l, double d, double g) {
    return n * l * d * g;
}

double ngon_area(double n, double l) {
    return 0.25 * n * l * l * cot(M_PI / n);
}

double expanded_area(double n, double l, double d, double g) {
    return ngon_area(n, l) + side_expansion(n, l, d, g) + angle_expansion(d, g);
}

int main() {
    cout << fixed << setprecision(6);
    int N, n, l, d, g;
    cin >> N;
    while(N--) {
        cin >> n >> l >> d >> g;
        cout << expanded_area(n, l, d, g) << endl;
    }
}