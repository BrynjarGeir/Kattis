#include <iostream>
#include <math.h>
using namespace std;

int num_factors(int number) {
    int factors = 0;
    for(int i = 1; i < ceil(sqrt(number)); i++) {
        if(number % i == 0) factors++;
    }
    return factors;
}

int main() {
    int number;
    cin >> number;
    int ans = num_factors(number);
    cout << ans;

    return 0;
}