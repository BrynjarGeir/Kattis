#include <iostream>
using namespace std;

int main() {
    int x, y, r;
    cin >> x >> y >> r;

    cout << x-r << ' ' << y-r << endl << x-r << ' ' << y+r << endl << x+r << ' ' << y+r << endl << x+r << ' ' << y-r;
}