#include <iostream>
using namespace std;

int main() {
    double C, area = 0, w, l;
    int L;

    cin >> C;
    cin >> L;

    for (int i = 0; i < L; i ++) {
        cin >> w >> l;

        area += w * l;
    }

    cout << fixed << area * C;
}