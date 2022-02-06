#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    if (l > 0 && l == r) {
        cout << "Even " << l + r;
    } else if (l + r > 0) {
        cout << "Odd " << max(l,r) * 2;
    } else {
        cout << "Not a moose";
    }
}