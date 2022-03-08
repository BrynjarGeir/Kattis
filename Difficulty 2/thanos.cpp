#include <iostream>
using namespace std;

int main() {
    int T;
    long long P, R, F;
    cin >> T;
    while(T--) {
        cin >> P >> R >> F;
        long long years = 0;
        while(P <= F) {
            P *= R;
            years++;
        }
        cout << years << endl;
    }
}