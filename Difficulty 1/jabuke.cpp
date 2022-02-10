#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, n, x, y, inside = 0;
    double area, area_1, area_2, area_3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        double tmpx2, tmpy2, tmpx3, tmpy3, d;
        double w1, w2, w3;
        tmpx2 = x2 - x1;
        tmpy2 = y2 - y1;
        tmpx3 = x3 - x1;
        tmpy3 = y3 - y1;
        x -= x1;
        y -= y1;
        d = x2*y3 - x3*y2;
        w1 = (x*(y2-y3)+y*(x3-x2)+x2*y3-x3*y2) / d;
        w2 = (x*y3 - y*x3) / d;
        w3 = (y*x2 - x*y2) / d;

        if (w1 >= 0 && w1 <= 1 && w2 >= 0 && w2 <= 1 && w3 >= 0 && w3 <= 1) {
            inside++;
        }

    }

    area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1 - y2)) * 0.5;

    cout << fixed << area << endl;
    cout << inside;
}