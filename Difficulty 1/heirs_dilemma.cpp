#include <iostream>
using namespace std;

bool six_non_zero_digits(int n) {
    string number = to_string(n);
    if(number.size() != 6) return false;
    for(char c: number) {
        if(c == '0') return false;
    }
    return true;
}

bool all_different(int n) {
    bool digits[10] = {false};
    while(n) {
        int rem = n % 10;
        if(digits[rem]) return false;
        else digits[rem] = true;
        n /= 10;
    }
    return true;
}

bool div_by_all(int n) {
    int m = n;
    while(m) {
        int i = m % 10;
        if(n % i != 0) return false;
        m /= 10;
    }
    return true;
}
 
int main() {
    int L, H, counter = 0;
    cin >> L >> H;

    for(int i = L; i <= H; i++) {
        if(six_non_zero_digits(i) && all_different(i) && div_by_all(i)) counter++;
    }

    cout << counter;
}