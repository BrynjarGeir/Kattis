#include <iostream>
using namespace std;

int main() {
    int r, n, current;
    cin >> r >> n;

    int occupied[r];
    for(int i = 0; i < n; i++) {
        cin >> current;
        occupied[current-1] = 1;
    }

    for(int i = 0; i < r; i++) {
        if(occupied[i] != 1) {
            cout << i+1;
            return 0;
        }
    }

    cout << "too late";
}