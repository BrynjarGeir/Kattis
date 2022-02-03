#include <iostream>
using namespace std;

int isHarshad(int n) {
    int sd = 0;
    int m = n;

    while (m > 0) {
        sd += m % 10;
        m /= 10;
    }

    if (n % sd == 0) {
        return 1;
    }
    return 0;

}

int main() {
    int n;
    cin >> n;

    while (true) {
        if (isHarshad(n) == 1) {
            cout << n;
            return 0;
        }
        n += 1;
    }

}