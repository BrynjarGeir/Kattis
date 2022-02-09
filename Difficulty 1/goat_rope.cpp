#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x,y,x1,y1,x2,y2;
    double dist;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    if (x > x2 && y > y2) {
        dist = sqrt(pow(x-x2,2) + pow(y-y2,2));
    } else if (x1 < x && x < x2) {
        dist = min(abs(y-y2), abs(y-y1));
    } else if (y1 < y && y < y2) {
        dist = min(abs(x-x2), abs(x-x1));
    } else if (x < x1 && y < y1) {
        dist = sqrt(pow(x-x1,2) + pow(y-y1,2));
    } else if (x < x1 && y > y2) {
        dist = sqrt(pow(x-x1, 2) + pow(y-y2,2));
    } else if (x > x2 && y < y1) {
        dist = sqrt(pow(x-x2, 2) + pow(y-y1,2));
    }

    cout << fixed << dist;

}