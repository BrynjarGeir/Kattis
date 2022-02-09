#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double bottle = 400, yraglac, T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> yraglac;
        cout << ceil(yraglac/bottle) << endl;
    }
}