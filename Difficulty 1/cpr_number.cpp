#include <iostream>
using namespace std;

int main() {
    int ans = 0, mult[10] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1}, pos = 0, current;
    string line;
    cin >> line;
    for(char c: line) {
        if (isdigit(c)) {
            current = c - 48;
            ans += mult[pos] * current;
            pos++;
        }
    }

    cout << (ans % 11 == 0) ? 1 : 0;

}