#include <iostream>
using namespace std;

int main() {
    long long n;
    int counter = 1;
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *=3;
            n++;
        }
        counter++;
    }

    cout << counter;
}