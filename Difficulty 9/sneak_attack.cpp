#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x1, y1, x2, y2, x, y;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x >> y) {
        double m1 = (y1-y2)/(x1-x2), m2 = (y2-y)/(y2-y), m3 = (y1-y)/(x1-x);
        if(m1 == 0 && (x >= x1 || x >= x2) && y > y1)  
    }
}