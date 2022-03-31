#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char grid[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    while(true) {
        vector<pair<int, int>> changes;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(i < N - 1 && grid[i][j] == 'V' && grid[i+1][j] == '.') {
                    changes.push_back({i+1,j});
                } else if(grid[i][j] == 'V' && i < N - 1 && grid[i+1][j] == '#' && (j > 0 || j < M-1)) {
                    if(j > 0 && grid[i][j-1] == '.') {
                        changes.push_back({i,j-1});
                    }
                    if(j < M-1 && grid[i][j+1] == '.') {
                        changes.push_back({i,j+1});
                    }
                }
            }
        }
        if(changes.empty()) break;
        for(auto ch: changes) grid[ch.first][ch.second] = 'V';
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << grid[i][j];
        }
        if(i != N - 1) cout << endl;
    }
}