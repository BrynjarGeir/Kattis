#include <iostream>
using namespace std;

int main() {
    double hits, bases = 0, actualhits, hit;

    cin >> hits;

    actualhits = hits;

    for (int i = 0; i < hits; i++) {
        cin >> hit;
        if (hit != -1) {
            bases += hit;
        } else {
            actualhits -= 1;
        }
    }

    cout << fixed << bases / actualhits;
}