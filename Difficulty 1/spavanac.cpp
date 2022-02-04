#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    m -= 45;

    if (m >= 0) {
        cout << h << " " << m;
    } else if (h > 0){
        h -= 1;
        m += 60;
        cout << h << " " << m;
    } else {
        h = 23;
        m += 60;
        cout << h << " " << m;
    }
}