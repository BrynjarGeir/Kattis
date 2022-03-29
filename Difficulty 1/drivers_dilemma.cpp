#include <iostream>
using namespace std;

int main() {
    double C, X, M, f, S, highest_speed = -1;
    cin >> C >> X >> M;

    for(int i = 0; i < 6; i++) {
        cin >> S >> f;
        double H = M / S;
        if((C/2) - (H*X + M/f) > 0.000001) highest_speed = S;
    }

    if(highest_speed > 0) cout << "YES " << (int)highest_speed;
    else cout << "NO";




}