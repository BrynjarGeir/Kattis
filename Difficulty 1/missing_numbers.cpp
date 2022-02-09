#include <iostream>
using namespace std;

int main() {
    int n, curr, prev = 0;
    bool missing = false;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> curr;
        if (curr == prev + 1) {
            prev = curr;
            continue;
        }
        while (prev != curr - 1) {
            cout << prev + 1 << endl;
            prev++;
        }
        prev = curr;
        missing = true;
    }

    if(!missing) {
        cout << "good job";
    }
}