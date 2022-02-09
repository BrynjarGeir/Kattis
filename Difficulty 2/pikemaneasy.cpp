#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, T, A, B, C, t0;
    long penalty = 0, solved = 0, time = 0;
    vector<long> penalties;
    cin >> N >> T;
    cin >> A >> B >> C >> t0;

    penalties[0] = t0;
    for (int i = 1; i < N; i++) {
        penalties.push_back((A*penalties.back() + B) % C + 1);
    }

    sort(penalties.begin(), penalties.end());    

    for (int i = 0; i < N; i++) {
        if (time + penalties[i] <= T) {
            penalty = (penalty + penalties[i] + time) % 1000000007;
            time += penalties[i];
            solved++;
        } else {
            break;
        }
    }

    cout << solved << " " << penalty;
}