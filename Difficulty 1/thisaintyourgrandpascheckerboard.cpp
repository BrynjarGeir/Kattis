#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char board[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    int prev_c, prev_r, count_rw, count_cw, count_rb, count_cb;
    for(int i = 0; i < n; i++) {
        prev_c = 0, prev_r = 0, count_rw = 0, count_cw = 0, count_rb = 0, count_cb = 0;
        for(int j = 0; j < n; j++) {
            if(board[i][j] == 'W') count_rw++;
            else count_rb++;

            if(board[j][i] == 'B') count_cb++;
            else count_cw++;

            if(j > 0 && board[i][j] == board[i][j-1]) prev_r++;
            else prev_r = 0;
            if(j > 0 && board[j][i] == board[j-1][i]) prev_c++;
            else prev_c = 0;

            if(prev_c >= 2 || prev_r >= 2) {
                cout << 0;
                return 0;
            }
        }
        if(count_rw == count_rb && count_cw == count_cb) continue;
        cout << 0;
        return 0;
    }

    cout << 1;
}