#include <iostream>
using namespace std;

int main() {
    int rod = 0, N, current;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> current;
        rod += current;
    }

    rod -= N -1;

    cout << rod;
}