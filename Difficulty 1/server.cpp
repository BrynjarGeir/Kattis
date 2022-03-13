#include <iostream>
using namespace std;

int main() {
    int n, T, performed = 0, task;
    cin >> n >> T;

    while(T > 0) {
        cin >> task;
        T -= task;
        if(T < 0) break;
        performed++;
    }

    cout << performed;
}