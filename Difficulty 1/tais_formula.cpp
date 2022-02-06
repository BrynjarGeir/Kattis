#include <iostream>
using namespace std;

int main() {
    double n, prev_time, prev_val, curr_time, curr_val, total = 0, first, second;

    cin >> n;
    cin >> prev_time >> prev_val;

    for (int i = 1; i < n; i++) {
        cin >> curr_time >> curr_val;
        total += (curr_val + prev_val) * (curr_time - prev_time) / 2;
        prev_time = curr_time;
        prev_val = curr_val;
    }

    cout << fixed << total/1000;
}
