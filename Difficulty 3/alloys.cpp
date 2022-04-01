#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << fixed << setprecision(6);
    double c;
    cin >> c;
    double ans = pow(c/2.0, 2.0);
    if(c >= 1) cout << 0.25;
    else cout << ans;
    
}