#include <iostream>
using namespace std;

int main() {
    int H, W, N, M;
    cin >> H >> W >> N >> M;

    int pre[H][W], mask[N][M];

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> pre[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < W; j++) {
            cin >> mask[N][M];
        }
    }

    for(int i = 0; i < H - N + 1; i++) {
        for(int j = 0; j < W - M + 1; j++) {
            int curr_number = 0;
            for(int k = i; k < i + N; k++) {
                curr_number += 
            }
        }
    }
}