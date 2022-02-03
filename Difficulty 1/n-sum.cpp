#include <iostream>
using namespace std;

int main() {
    int ans = 0, N, number;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> number;
        ans += number;
    }

    cout << ans;

}