#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    double dist_ab, dist_bc, dist_ac;

    cin >> ax >> ay >> bx >> by >> cx >> cy;

    dist_ab = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    dist_bc = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    dist_ac = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

    if (dist_ab == dist_bc) {
        dx = ax + cx - bx;
        dy = ay + cy - by;
    } else if (dist_ab == dist_ac) {
        dx = bx + cx - ax;
        dy = by + cy - ay;
    } else {
        dx = ax + bx - cx;
        dy = ay + by - cy;
    }

    cout << dx << " " << dy;

}