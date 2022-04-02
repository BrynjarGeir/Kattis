#include <iostream>
using namespace std;

bool checkValid(char board[5][5], int i, int j) {
    if(i - 1 >= 0 && j - 2 >= 0 && board[i-1][j-2] == 'k') return false;
    if(i - 1 >= 0 && j + 2 < 5 && board[i-1][j+2] == 'k') return false;
    if(i + 1 < 5 && j - 2 >= 0 && board[i+1][j-2] == 'k') return false;
    if(i + 1 < 5 && j + 2 < 5 && board[i+1][j+2] == 'k') return false;
    if(i - 2 >= 0 && j - 1 >= 0 && board[i-2][j-1] == 'k') return false;
    if(i - 2 >= 0 && j + 1 >= 0 && board[i-2][j+1] == 'k') return false;
    if(i + 2 < 5 && j - 1 >= 0 && board[i+2][j-1] == 'k') return false;
    if(i + 2 < 5 && j + 1 < 5 && board[i+2][j+1] == 'k') return false;
    return true;
}

int main() {
    char board[5][5];
    int count = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> board[i][j];
            if(board[i][j] == 'k') count++;
        }
    }

    if(count != 9) {cout << "invalid"; return 0;}

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(board[i][j] == 'k' && !checkValid(board, i, j)) {cout << "invalid"; return 0;}
        }
    }

    cout << "valid";
}