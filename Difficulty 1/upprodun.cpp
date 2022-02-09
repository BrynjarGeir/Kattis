#include <iostream>
using namespace std;

int main() {
    int N, M, base, extra;

    cin >> N;
    cin >> M;

    base = M / N;
    extra = M % N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < base; j++) {
            cout << '*';
        }
        if (extra > 0) {
            cout << '*';
        }
        extra--;
        cout << endl;
    }

}