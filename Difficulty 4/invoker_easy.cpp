#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double diver = c*c+d*d;
    double r = (a*c+b*d)/diver, i = (b*c-a*d)/diver;

    cout << r << " " << i;
}