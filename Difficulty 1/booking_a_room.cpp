#include <iostream>
using namespace std;

int main() {
    int r, n, current;
    cin >> r >> n;
    if(r == n) {
        cout << "too late";
        return 0;
    }
    int occupied[r];
    for(int i = 0; i < n; i++) {
        cin >> current;
        occupied[current-1] = 1;
    }

    for(int i = 0; i < n; i++) {
        if(occupied[i] != 1) {
            cout << i+1;
            return 0;
        }
    }
}