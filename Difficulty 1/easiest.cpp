#include <iostream>
using namespace std;

int sum_digits(int N) {
    int ans = 0;
    while(N!=0) {
        ans += N%10;
        N/=10;
    }
    return ans;
}

int main() {
    int N, m, p, digit_sum;
    cin >> N;

    while(N != 0) {
        digit_sum = sum_digits(N);
        int i = 11;
        while(true) {
            p = N * i;
            m = sum_digits(p);
            if(m == digit_sum) {
                cout << i << endl;
                break;
            }
            i++;
        }
        cin >> N;
    }
}