#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, p, curr, time = 0, Num_AC = 0, Penalty_Time = 0;
    cin >> N >> p;
    int A[N];

    for(int i = 0; i < N; i++) {
        cin >> curr;
        if (i == p) {
            if(curr > 300) {
                cout << 0 << " " << 0;
                return 0;
            }
            Penalty_Time += curr;
            Num_AC++;
            time += curr;
            A[i] = 999;
        }
        else A[i] = curr;
    }

    sort(A, A+N);

    for(int i = 0; i < N; i++) {
        time += A[i];
        if (time > 300) break;
        Penalty_Time += time;
        Num_AC++;
    }

    cout << Num_AC << " " << Penalty_Time;

}