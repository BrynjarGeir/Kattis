#include <iostream>
using namespace std;

int main() {
    int n, correct = 0;
    char prev='0', curr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (prev == '0') {
            prev = curr;
        } else {
            if (prev == curr) {
                correct++;
            }
            prev = curr;
        }
    }
    cout << correct;
}