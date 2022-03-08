#include <iostream>
using namespace std;

int main() {
    int h, w, max_left, max_right = -1;
    double center_x, num_x = 0;
    cin >> h >> w;
    max_left = w;

    char grid[h][w], curr;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> curr;
            if(curr != '.') {
                center_x += j;
                num_x++;
                if(i == h-1) {
                    max_left = min(max_left, j);
                    max_right = max(max_right, j);
                }
            }
            grid[i][j] = curr;
        }
    }
    center_x /= num_x;
    if (center_x - 0.5 > max_right) cout << "right";
    else if(center_x + 0.5 < max_left) cout << "left";
    else cout << "balanced";

}