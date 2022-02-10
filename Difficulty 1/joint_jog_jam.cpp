#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double kx1, kx2, ky1, ky2, ox1, ox2, oy1, oy2;
    cin >> kx1 >> ky1 >> ox1 >> oy1 >> kx2 >> ky2 >> ox2 >> oy2;

    double start, end;
    start = sqrt(pow(kx1 - ox1, 2) + pow(ky1 - oy1,2));
    end = sqrt(pow(kx2 - ox2, 2) + pow(ky2 - oy2, 2));
    double ans = max(start, end);

    cout << fixed << ans;
}