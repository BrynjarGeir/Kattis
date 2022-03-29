#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    char slash;
    cin >> a >> slash >> b;
    int n = 5*a-160*b, d = 9*b;
    int g = __gcd(n, d);
    n /= g, d /= g;
    cout << n << '/' << d;

}