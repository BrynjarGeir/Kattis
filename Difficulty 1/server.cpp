#include <iostream>
using namespace std;

int main() {
    int n, T, performed = 0, task;
    cin >> n >> T;
    int c = n;
    while(c--) {
        cin >> task;
        T -= task;
        if(T < 0) {
            cout << n - c - 1;
            return 0;
        };
    }

    cout << n;
}