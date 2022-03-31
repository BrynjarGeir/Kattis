#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        int max_p = 1;
        for(int i = 2; i < sqrt(n) + 1; i++) {
            long double b = floor(pow(n, 1.0/i));
            if(abs(pow(b, i) - n) < 0.000001) max_p = i;
        }
        cout << max_p << endl;
    }
}