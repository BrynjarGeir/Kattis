#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> board;
    vector<int> line;
    int tile, move;

    for (int i = 0; i < 4; i++) {
        line.clear();
        for (int j = 0; j < 4; j++) {
            cin >> tile;
            line.push_back(tile);
        }
        board.push_back(line);
    }
    cin >> move;

    if (move == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                
            }
        }
    }
}