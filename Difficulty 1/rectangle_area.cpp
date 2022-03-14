#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(3) << abs((x2-x1) * (y2-y1));
}