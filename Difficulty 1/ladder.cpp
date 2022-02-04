#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double h, theta;
    cin >> h >> theta;
    theta = theta * M_PI / 180;

    cout << ceil(h / sin(theta));
}