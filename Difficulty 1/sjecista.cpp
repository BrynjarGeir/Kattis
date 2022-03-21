#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double n;
    cin >> n;

    double ans = pow(n, 4) - 6 * pow(n, 3) + 11 * pow(n, 2) - 6 * n;
    ans /= 24;
    cout << ans;
}