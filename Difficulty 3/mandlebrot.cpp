#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x, y, tmp, x_org, y_org;
    int r, c = 1, i;

    while(cin >> x >> y >> r) {
        i = 0;
        x_org = x, y_org = y;
        while(sqrt(pow(x,2) + pow(y,2)) <= 2 && ++i < r) {
            x = x * x - y * y + x_org;
            y = 2 * tmp * y + y_org;
        }
        if (i < r) cout << "Case " << c++ << ": OUT" << endl;
        else cout << "Case " << c++ << ": IN" << endl;
    }
}