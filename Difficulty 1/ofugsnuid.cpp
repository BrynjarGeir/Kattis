#include <iostream>
using namespace std;

int main() {
    int n, tala;
    cin >> n;
    int tolur[n];

    for(int i = 0; i < n; i++) {
        cin >> tala;
        tolur[i] = tala;
    }

    for(int i = n-1; i > -1; i--) {
        cout << tolur[i] << endl;
    }
}