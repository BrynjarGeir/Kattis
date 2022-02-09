#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, G, curr;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> G;
        int odd[G];
        for (int j = 0; j < G; j++) {
            cin >> curr;
            odd[j] = curr;
        }
        sort(odd, odd + G);
        bool s = true;
        for (int k = 0; k < G-1; k += 2) {
            if (odd[k] != odd[k+1]) {
                cout << "Case #" << i+1 << ": " << odd[k] << endl;
                s = false;
                break;
            }
        }
        if (s) {
            cout << "Case #" << i + 1 << ": " << odd[G-1] << endl;
        }
    }
}