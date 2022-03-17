#include <iostream>
using namespace std;

int main() {
    long P, K, p, q, ans;
    char c;
    string track = "";
    cin >> P;

    for(int i = 0; i < P; i++) {
        cin >> K >> p >> c >> q;
        while(p > 1 || q > 1) {
            if(p < q) {
                track = "L" + track;
                q -= p;
            } else {
                track = "R" + track;
                p -= q;
            }
        }
        long N = 1;
        for(auto it: track) {
            if(it == 'L') {
                N *= 2;
            } else if(it == 'R') {
                N *= 2;
                N++;
            }
        }
        cout << K << " " << N;
        if(i != P-1) cout << endl;
        track.clear();
    }
}