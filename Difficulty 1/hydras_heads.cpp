#include <iostream>
using namespace std;

int main() {
    int H, T;

    while(cin >> H >> T && (H > 0 || T > 0)) {
        int moves = 0;
        while(!(H == 0 && T == 0)) {
            if(H % 2 == 1) {
                if(T - 2 >= 0) {
                    T -= 2;
                    H++;
                    moves++;
                }
            } else if(H -2 >= 0) {
                H -= 2;
                moves++;
            }
            if((H == 0 || H == 1) && T / 2 != 2 && T != 0) {
                T++;
                moves++;
            } else if(T / 2 == 2 && T - 2 >= 0) {
                H++;
                T -= 2;
                moves++;
            }
        }
        cout << moves << endl;
        
    }
}