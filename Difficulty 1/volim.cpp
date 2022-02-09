#include <iostream>
using namespace std;

int main() {
    int K, N, T, time_left = 210;
    char Z;

    cin >> K;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> T >> Z;
        time_left -= T;
        if (time_left < 0) {
            break;
        }
        if (Z == 'T') {
            K++;
            if (K == 9) {
                K = 1;
            }
        }
    }
    cout << K;
}