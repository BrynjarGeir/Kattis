#include <iostream>
using namespace std;

int main() {
    int N, M, smaller, larger;

    cin >> N >> M;

    smaller = min(N, M);

    for (int i = 0; i < abs(N-M) + 1; i++) {
        cout << smaller + 1 + i << endl;
    }
}