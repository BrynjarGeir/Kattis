#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, ans;

    cin >> a >> b >> c >> d >> e;

    cin >> ans;

    if (ans >= a) {
        cout << "A";
        return 0;
    } else if (ans >= b) {
        cout << "B";
        return 0;
    } else if (ans >= c) {
        cout << "C";
        return 0;
    } else if (ans >= d) {
        cout << "D";
        return 0;
    } else if (ans >= e) {
        cout << "E";
        return 0;
    } else {
        cout << "F";
        return 0;
    }
}