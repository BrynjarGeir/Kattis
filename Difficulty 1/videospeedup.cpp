#include <iostream>
using namespace std;

int main() {
    int n;
    double original_time = 0, curr, prev = 0, mult = 0, p, k;
    cin >> n >> p >> k;
    for(int i = 0; i < n; i++) {
        cin >> curr;
        original_time += (1 + mult * p / 100)*(curr - prev);
        prev = curr, mult++;
    }
    cout << original_time;
}