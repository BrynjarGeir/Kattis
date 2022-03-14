#include <iostream>
using namespace std;

int main() {
    char grid[8][8];
    pair<int, int> queens[8];
    int queen_pos = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == '*') {
                queens[queen_pos] = make_pair(i, j);
                queen_pos++;
            }
        }
    }

    for(auto q: queens) {
        for(int i = 0; i < 8; i++) {
            if(grid[i][q.second] == '*' && i != q.first) {
                cout << "invalid";
                return 0;
            }
            if(grid[q.first][i] == '*' && i != q.second) {
                cout << "invalid";
                return 0;
            }
            if(q.first-i >= 0 && q.second-i >= 0 && grid[q.first-i][q.second-i] == '*' && i != 0) {
                cout << "invalid";
                return 0;
            }
            if(q.first+i < 8 && q.second+i < 8 && grid[q.first+i][q.second+i] == '*' && i != 0) {
                cout << "invalid";
                return 0;
            }
            if(q.first+i < 8 && q.second-i >= 0 && grid[q.first+i][q.second-i] == '*' && i != 0) {
                cout << "invalid";
                return 0;
            }
            if(q.first-i >= 0 && q.second+i < 8 && grid[q.first-i][q.second+i] == '*' && i != 0) {
                cout << "invalid";
                return 0;
            }
        }
    }

    cout << "valid";


}