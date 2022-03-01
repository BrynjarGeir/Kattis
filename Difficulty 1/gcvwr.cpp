#include <iostream>
using namespace std;

int main() {
    int G, T, N, item, total_weight;
    cin >> G >> T >> N;
    total_weight = 0;
    for(int i = 0; i < N; i++) {
        cin >> item;
        total_weight += item;
    }

    cout << 0.9 * (G - T) - total_weight;
}