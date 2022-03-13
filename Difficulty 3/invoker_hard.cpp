#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << fixed << setprecision(6);
    double a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    double divider = e*e + f*f + g*g + h*h;
    double r_part = (a*e + b*f + c*g + d*h)/divider, i_part = (e*b-a*f+d*g-c*h)/divider, j_part = (e*c-a*g+b*h-d*f)/divider, k_part = (e*d-a*h+c*f-b*g)/divider;

    cout << r_part << " " << i_part << " " << j_part << " " << k_part;
}