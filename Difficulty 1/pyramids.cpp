#include <iostream>
using namespace std;

int main() {
    int N, height = 0;
    cin >> N;
    int blocks = N;

    for (int i = 1; i < N; i += 2) {
        blocks -= i * i;
        if (blocks < 0) {
            cout << height;
            return 0;
        } else {
            height += 1;
        }
    }
}