#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int inf = 2 << 28;

bool validSquare(vector<vector<int>> grid, int i, int j) {
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid.at(0).size() || grid.at(i).at(j) == 0) return false;
    return true;
}

int main() {
    int n, m, value;
    cin >> n >> m;
    vector<vector<int>> grid;
    grid.resize(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> value;
            grid.at(i).at(j);
        }
    }

    vector<vector<int>> dist;
    dist.resize(n, vector<int>(m, inf));
    queue<pair<int, int>> q;
    q.push({0,0});

    while(!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        int range = grid[x][y];
        if(validSquare(grid, x-range, y)) {
            if(dist[x][y]+1 < dist[x-range][y]) {
                dist[x-range][y] = dist[x][y] + 1;
                q.push({x-range, y});
            }
        }
        if(validSquare(grid, x+range, y)) {
            if(dist[x][y]+1 < dist[x+range][y]) {
                dist[x+range][y] = dist[x][y] + 1;
                q.push({x+range, y});
            }
        }
        if(validSquare(grid, x, y-range)) {
            if(dist[x][y]+1 < dist[x][y-range]) {
                dist[x][y-range] = dist[x][y] + 1;
                q.push({x, y-range});
            }
        }
        if(validSquare(grid, x, y+range)) {
            if(dist[x][y]+1 < dist[x][y+range]) {
                dist[x][y+range] = dist[x][y] + 1;
                q.push({x, y+range});
            }
        }
    }

    int d = dist[n-1][m-1];
    if(d == inf) cout << "-1";
    else cout << d;
}