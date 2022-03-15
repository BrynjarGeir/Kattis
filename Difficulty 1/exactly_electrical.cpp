#include <iostream>
#include <math.h>
using namespace std;

int manhattan_distance(int a, int b, int c, int d) {
    return abs(a - c) + abs(b - d);
}

int main() {
    int a,b,c,d,t;
    cin >> a >> b >> c >> d >> t;
    int md = manhattan_distance(a,b,c,d);
    if(md > t || (t - md) % 2 == 1) cout << 'N';
    else cout << 'Y';
}