#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, moves = 1;
    string line;
    vector<string> grid;
    bool new_move;
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> line;
        grid.push_back(line);
    }

    for(int j = 0; j < M; j++) {
        new_move = true;
        for(int i = 0; i < N; i++) {
            if (grid[i][j] == '$') {
                new_move = false;
                break;
            }
        }
        if(new_move) moves++;
    }
    cout << moves;
}