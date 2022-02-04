#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int tests;
    double v0, theta, x1, h1, h2;
    double g = 9.81;

    cin >> tests;

    for (int i = 0; i < tests; i++) {
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        theta = theta * M_PI / 180;

        if (h2 - h1 < 2) {
            cout << "Not Safe" << endl;
        } else {
            double t = x1 / (v0 * cos(theta));
            double y = v0 * t * sin(theta) - (g/2) * t * t;

            if ((h1 + 1 <= y)  && (y <= h2 - 1)) {
                cout << "Safe" << endl;
            } else {
                cout << "Not Safe" << endl;
            }
        }
    }
}