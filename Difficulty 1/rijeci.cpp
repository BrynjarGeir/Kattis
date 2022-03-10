#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;

    int As = 1, Bs = 0, tmp;

    while(K--) {
        tmp = Bs;
        Bs += As;
        As += tmp - As;
    }

    cout << As << " " << Bs;
}