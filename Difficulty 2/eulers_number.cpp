#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

long double getEulersNumber(int n) {
    long double e = 0;
    for(int i = 0; i <= min(20, n); i++) e += 1.0 / tgamma(1+i);
    return e;
}


int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(12) << getEulersNumber(n);

}