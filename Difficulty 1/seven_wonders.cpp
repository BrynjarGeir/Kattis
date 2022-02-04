#include <iostream>
using namespace std;

int main() {
    int T = 0, C = 0, G = 0;
    string line;
    cin >> line;

    for (char c: line) {
        if (c == 'T') {
            T += 1;
        } else if (c == 'C') {
            C += 1;
        } else {
            G += 1;
        }
    }

    int smallest = min(T, C);
    smallest = min(smallest, G);

    int ans = T * T + C * C + G * G + 7 * smallest;

    cout << ans;
}