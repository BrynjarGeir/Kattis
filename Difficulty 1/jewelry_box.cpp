#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, x, y;
    double ans, ans1, ans2, root, bm;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        root = pow((x+y)/3, 2) - x*y/3;
        bm = (x+y)/3;
        ans1 = (bm + sqrt(root)) / 2;
        ans2 = (bm - sqrt(root)) / 2;
        if (ans1 >= x/2 || ans1 >= y/2) {
            cout << fixed << (x - 2*ans2) * (y - 2*ans2)*ans2 << endl;
        } else {
            cout << fixed << (x - 2*ans1) * (y - 2*ans1)*ans1 << endl;
        }
    }
}