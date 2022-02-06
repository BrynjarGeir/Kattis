#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a,b,c,d;
    double s;
    cin >> a >> b >> c >> d;

    s = (a+b+c+d) / 2;

    double max_area = pow((s-a)*(s-b)*(s-c)*(s-d),0.5);

    cout << fixed << max_area;
}