#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    double g, D, theta, speed, time, a;

    cin >> N >> g;

    double speeds[N];

    for(int i = 0; i < N; i++) {
        cin >> D >> theta;
        theta *= M_PI / 180;
        a = (g/2) * cos(theta);
        for(int j = 0; j < i; j++) {
            double under_root = pow(speeds[j] / a, 2) + 4 * D / a;
            time = 0.5 * (-speeds[j]/a + sqrt(under_root));
            speeds[j] += g * cos(theta) * time;
        }
        speeds[i] = g * cos(theta) * sqrt((2*D) / (g * cos(theta)));
    }

    cout << fixed;
    for(int i = 0; i < N; i++) {
        cout << speeds[i] << endl;
    }
}