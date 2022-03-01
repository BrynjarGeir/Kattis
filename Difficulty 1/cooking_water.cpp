#include <iostream>
using namespace std;

int main() {
    int N, lower = 0, higher = 1000, a, b;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        lower = max(lower, a);
        higher = min(higher, b);
    }

    if(lower > higher) cout << "edward is right";
    else cout << "gunilla has a point";
}