#include <iostream>
using namespace std;

int main() {
    int N, r, e, c;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> r >> e >> c;
        if (r < e - c) {
            cout << "advertise" << endl;
        } else if (r == e-c) {
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }
}