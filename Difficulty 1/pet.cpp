#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, m = 0, cont;

    for (int i = 0; i < 5; i++) {
        cin >> a >> b >> c >> d;
        if (m < a + b + c + d) {
            m = a + b + c + d;
            cont = i;
        }
    }
    cout << cont + 1 << ' ' << m;
}