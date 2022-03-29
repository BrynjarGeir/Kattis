#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> seedlings(N);

    for(int i = 0; i < N; i++) cin >> seedlings[i];

    sort(seedlings.begin(), seedlings.end(), greater<int>());
    int l = seedlings[0], days = 1;
    for(int i = 1; i < N; i++) {
        l--, days++;
        if(seedlings[i] > l) {
            l = seedlings[i];
        }
    }
    days += l;
    cout << days + 1;




}