#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int N = A.size(), M = B.size(), pos_A = -1, pos_B = -1;

    for(char c: A) {
        if(B.find(c) != string::npos) {
            pos_A = A.find(c);
            pos_B = B.find(c);
            break;
        }
    }

    if(pos_A == -1) return 0;

    for(int i = 0; i < M; i++) {
        if(i == pos_B) cout << A << endl;
        else {
            for(int j = 0; j < N; j++) {
                if(j == pos_A) cout << B.at(i);
                else cout << '.';
            }
            cout << endl;
        }
    }
}