#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long min_day = 10000000000;
    long long wait = -1;
    long long curr;

    for(int i = 0; i < n; i++) {
        cin >> curr;
        if (curr < min_day) {
            wait = i;
            min_day = curr;
        }
        if (curr == 0) {
            break;
        }
    }

    cout << wait;
}