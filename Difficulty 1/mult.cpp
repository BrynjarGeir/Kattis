#include <iostream>
using namespace std;

int main() {
    int n, prev = -1, curr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        if (prev == -1) {
            cin >> prev;
        } else {
            cin >> curr;
            if (curr % prev == 0) {
                cout << curr << endl;
                prev = -1;
            }
        }
    }
}