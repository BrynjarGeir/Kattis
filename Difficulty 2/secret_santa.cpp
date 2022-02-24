#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;

int main() {
    string n;
    int N;
    cin >> n;
    if(n.length() > 1) {
        cout << 1 - 1/M_E;
    } else {
        N = stoi(n);
        double derang[10] = {1, 0, 1, 2, 9, 44, 265, 1854, 14833, 133496};
        double fact = tgamma(N+1);
        cout << setprecision(6) << fixed << 1 - derang[N]/fact;
    }
}