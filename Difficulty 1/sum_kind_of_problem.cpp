#include <iostream>
using namespace std;

int main() {
    int N, a, b, S1, S2, S3;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> a >> b;
        S1 = b * (b + 1) / 2;
        S2 = b * b;
        S3 = S2 + b;
        cout << a << " " << S1 << " " << S2 << " " << S3 << endl;
    }
}