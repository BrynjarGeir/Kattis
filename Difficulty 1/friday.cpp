#include <iostream>
using namespace std;

int main() {
    int T, D, M, month, day, ft;

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> D >> M;
        day = 0;
        ft = 0;
        for (int j = 0; j < M; j++) {
            cin >> month;
            for (int k = 0; k < month; k++) {
                if (day == 5 && k == 12) ft++;
                day++;
                day %= 7;
            }
        }
        cout << ft << endl;         
    }
}