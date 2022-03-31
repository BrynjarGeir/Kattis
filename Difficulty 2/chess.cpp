#include <iostream>
using namespace std;

bool isOnDiagonal(int x1, int y1, int x2, int y2) {
    if()
}

int main() {
    char board[8][8];
    bool white = true;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(white) board[i][j] = 'w';
            else board[i][j] = 'b';
            white = !white;
        }
        white = !white;
    }
    char Y1, Y2;
    int x1, x2, y1, y2 T, moves;

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> Y1 >> x1 >> Y2 >> x2;
        y1 = Y1 - 'A', y2 = Y2 - 'A';
        if(board[x1][y1] != board[x2][y2]) cout << "Impossible" << endl;
        else if(x1 == x2 && y1 == y2) cout << 0 << " " << ('A'+y1) << x1 << endl;
        else {
            if(isOnDiagonal(x1, y1, x2, y2)) cout << "1 " << ('A'+y1) << x1 << " " << ('A+y2') << x2 << endl;
            else cout << "2 " << ('A'+y1) << x1 << " " << getOnDiagonal(x1, y1, x2, y2) << ('A+y2') << x2 << endl;
        }

    }    
}