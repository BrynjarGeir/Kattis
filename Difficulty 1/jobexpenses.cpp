#include <iostream>
using namespace std;

int main() {
    int N;
    long k,ks = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> k;
        if (k < 0) ks -= k;
    }

    cout << ks;
}