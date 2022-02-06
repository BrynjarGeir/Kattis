#include <iostream>
#include <tuple>
using namespace std;

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    if (ax == bx) {
        dx = cx;
    } else if (ax == cx) {
        dx = bx;
    } else {
        dx = ax;
    }

    if (ay == by) {
        dy = cy;
    } else if (ay == cy) {
        dy = by;
    } else {
        dy = ay;
    }

    
    cout << dx << " " << dy;
}