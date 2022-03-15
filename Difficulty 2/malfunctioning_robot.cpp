#include <iostream>
using namespace std;

int main() {
    int T, x1, y1, x2, y2;
    cin >> T;

    for(int t = 0; t < T; t++) {
        cin >> x1 >> y1 >> x2 >> y2;
        int distX = abs(x1-x2), distY = abs(y1-y2);
        if ((distX == 0 && distY == 1) || (distX == 1 && distY == 0)) cout << 1 << endl;
        else cout << 2 * max(distX, distY) << endl;
    }
}
