#include <iostream>
using namespace std;

int main() {
    int N, b;
    double p;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> b >> p;
        cout << fixed << 60 * (b-1) / p << " " << 60 * b / p << " " << 60 * (b + 1) / p << endl;
    }
}