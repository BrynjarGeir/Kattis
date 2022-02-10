#include <iostream>
using namespace std;

int main() {
    int x, y, tmp, new_x;
    cin >> x;

    while (x > 9) {
        y = x;
        new_x = 1;
        while (y > 0) {
            tmp = y % 10;
            if (tmp != 0) {
                new_x *= tmp;
            }
            y /= 10;
        }
        x = new_x;
    } 

    cout << x;
}