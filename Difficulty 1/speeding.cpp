#include <iostream>
using namespace std;

int main() {
    int prev_mile = 0, prev_time = 0, curr_mile, curr_time, n, max_speed = -1, curr_speed;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> curr_time >> curr_mile;
        if (curr_time != prev_time) {
            curr_speed = (curr_mile - prev_mile) / (curr_time - prev_time);
            max_speed = max(max_speed, curr_speed);
        }
        prev_time = curr_time;
        prev_mile = curr_mile;
    }

    cout << max_speed;
}