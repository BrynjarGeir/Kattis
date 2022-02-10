#include <iostream>
using namespace std;

int main() {
    int N, M, a, b;
    cin >> N >> M;
    int friends[N] = {0};

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        friends[a-1]++;
        friends[b-1]++;
    }

    for (int i = 1; i <= N; i++) {
        cout << friends[i-1] - i << " ";
    }
}