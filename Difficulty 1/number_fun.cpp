#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, larger, smaller;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        larger = max(a,b);
        smaller = min(a,b);
        if (c > larger) {
            if ((larger + smaller == c) || (larger * smaller == c)) {
                cout << "Possible" << endl;
            } else {
                cout << "Impossible" << endl;
            }
        }
        else if (c < larger) {
            if ((larger - smaller == c) || ((larger % smaller == 0) && (larger / smaller == c))) {
                cout << "Possible" << endl;
            } else {
                cout << "Impossible" << endl;
            }
        } else {
            if (smaller == 1) {
                cout << "Possible" << endl;
            } else {
                cout << "Impossible" << endl;
            }
        }
    }
}