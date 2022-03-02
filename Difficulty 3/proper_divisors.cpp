#include <iostream>
#include <math.h>
#include <signal.h>
using namespace std;

int sum_factors(int n) {
    int sum_o_factors = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum_o_factors += i;
        }
    }
    return sum_o_factors;
}

int main() {
    int b = 500;
    double n;
    while(b--) {
        cin >> n;
        int sum_o_factors = sum_factors(n);
        if (sum_o_factors == n) cout << n << " perfect" << endl;
        else if(abs(sum_o_factors - n) < 3) cout << n << " almost perfect" << endl;
        else cout << n << " not perfect" << endl;
    }
}