#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r, h, s;
    double angle, curve, straight, total;

    cin >> r >> h >> s;
    while (r != 0 || h != 0 || s != 0) {
        angle = 360 - 2 * acos(r/h) * (180 / M_PI);
        curve = 2 * M_PI * (angle/360) * r;
        straight = 2 * sqrt(pow(h,2) - pow(r,2));
        total = (curve + straight) * (1 + s/100);
        cout << setprecision(2) << fixed;
        cout << total << endl;
        cin >> r >> h >> s;
    }
}