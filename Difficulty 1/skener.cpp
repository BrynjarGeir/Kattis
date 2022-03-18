#include <iostream>
using namespace std;

int main() {
    int R, C, ZR, ZC;
    cin >> R >> C >> ZR >> ZC;
    char grid[R][C], new_grid[R*ZR][C*ZC];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < ZR * R; i++) {
        for(int j = 0; j < ZC * C; j++) {
            cout << grid[i/ZR][j/ZC];
        }
        cout << endl;
    }
    
}