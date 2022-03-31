#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N < 3) {cout << "impossible"; return 0;}
    vector<long long> sticks(N);

    for(int i = 0; i < N; i++) cin >> sticks[i];

    sort(sticks.begin(), sticks.end());

    for(int i = 0; i < N - 2; i++) {
        long long a = sticks.at(i), b = sticks.at(i+1), c = sticks.at(i+2);
        if(a + b > c) {cout << "possible"; return 0;}
    }

    cout << "impossible";
}