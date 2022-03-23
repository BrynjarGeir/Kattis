#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    double a, b, c, length = 0, angle, cosC, ans;
    cin >> N;
    while(N--) {
        cin >> a >> b >> c;
        cosC = (a*a + b*b - c*c)/(2 * a * b);
        angle = acos(cosC);
        cout << angle*180/M_PI << endl;
        ans = c * sin(angle);
        length += ans;
    }

    cout << fixed << length;
}