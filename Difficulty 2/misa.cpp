#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    char seating[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> seating[i][j];
        }
    }
    int max_neighbors = 0, found = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(seating[i][j] == '.')
        }
    }
}