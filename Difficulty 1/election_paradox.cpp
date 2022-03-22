#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, pi;
    cin >> N;
    int odd_regions[N];
    for(int i = 0; i < N; i++) {
        cin >> odd_regions[i];
    }

    sort(odd_regions, odd_regions + N);
    int can_win = N / 2, votes = 0;
    for(int i = N - 1; i > can_win; i--) votes += odd_regions[i];
    for(int i = 0; i <= can_win; i++) votes += odd_regions[i]/2;

    cout << votes;

}