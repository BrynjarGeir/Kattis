#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double L, R;
    cin >> L >> R;
    double sqRadius = sqrt(2 * pow(L/2,2));
    if(sqRadius <= R) cout << "fits";
    else cout << "nope";
}