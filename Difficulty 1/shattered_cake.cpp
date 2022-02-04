#include <iostream>
using namespace std;

int main() {
    int N, W, area = 0, l, w;

    cin >> W;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> w >> l;
        area += w * l;
    }

    int L = area / W;
    cout << L;
}