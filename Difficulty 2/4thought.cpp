#include <iostream>
using namespace std;

int main() {
    int tests, ans, m, j = 0, copy;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        cin >> ans;
        if (ans > 256 || ans < -60) {
            cout << "no solution";
        } else if (ans == 0) {
            cout << "4 + 4 - 4 - 4";
        } else if (ans > 0) {
            m = ans % 4;
            copy = ans;
            while (copy > 4) {
                j++;
                copy -= 4;
            }
            
        }
    }
}