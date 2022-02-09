#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y % 2 == 0) {
        cout << "possible";
    } else {
        cout << "impossible";
    }
}