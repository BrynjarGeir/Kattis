#include <iostream>
using namespace std;

int main() {
    int N, K, powerstrips, outlets;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> K;
        powerstrips = 0;
        for (int j = 0; j < K; j++) {
            cin >> outlets;
            powerstrips += outlets;
        }
        powerstrips -= K - 1;
        cout << powerstrips << endl;
    }
}