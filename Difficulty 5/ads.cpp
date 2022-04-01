#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    char grid[H][W];

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    bool change = true;
    while(change) {
        change = false;
        for(int i = 0; i < H; i++) {
            for(int j = 0; j < W; j++) {
                if(grid[i][j] == '+') 
            }
        }
    }


}