#include <iostream>
using namespace std;

int main() {
    int N, L, D, R, G, pos = 0, time = 0;
    cin >> N >> L;

    for(int i = 0; i < N; i++) {
        cin >> D >> R >> G;
        time += D - pos;
        int whole = time / (R + G);
        if(time - (R + G) * whole <= R) time += R - (time - (R + G) * whole);
        pos = D;
    }

    time += L - pos;
    cout << time;
}