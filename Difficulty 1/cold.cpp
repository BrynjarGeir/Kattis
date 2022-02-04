#include <iostream>
using namespace std;

int main() {
    int n, neg = 0, temp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < 0) {
            neg += 1;
        }
    }

    cout << neg;
}