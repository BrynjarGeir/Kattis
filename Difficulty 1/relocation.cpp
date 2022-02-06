#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> addresses;
    int N, Q, address;
    int qt, A, B;

    cin >> N >> Q;

    for (int i = 1; i <= N; i++) {
        cin >> address;
        addresses[i] = address;
    }

    for (int i = 0; i < Q; i++) {
        cin >> qt >> A >> B;
        if (qt == 1) {
            addresses[A] = B;
        } else {
            cout << abs(addresses[A] - addresses[B]) << endl;
        }
    }
}