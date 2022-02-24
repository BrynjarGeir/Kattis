#include <iostream>
#include <cmath>
using namespace std;

double equation(double p, double a, double b, double c, double d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
    double p, a, b, c, d;
    int n;
    cin >> p >> a >> b >> c >> d >> n;
    double max_val = 0, max_drop_off = 0;
    for(int i = 1; i <= n; i++) {
        double next = equation(p, a, b, c, d, i);
        if(max_val < next) max_val = next;
        else if(max_val - next > max_drop_off) max_drop_off = max_val - next; 
    }

    cout << fixed << max_drop_off;



}