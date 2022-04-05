#include <iostream>
#include <vector>
using namespace std;

void explore_neighbors(vector<vector<char>> &grid, int i, int j) {
    grid.at(i).at(j) = '#';
    if(i > 0 && grid.at(i-1).at(j) == '-') explore_neighbors(grid, i-1, j);
    if(i < grid.size() - 1 && grid.at(i+1).at(j) == '-') explore_neighbors(grid, i+1, j);
    if(j > 0 && grid.at(i).at(j-1) == '-') explore_neighbors(grid, i, j-1);
    if(j < grid.at(0).size() - 1 && grid.at(i).at(j+1) == '-') explore_neighbors(grid, i, j+1);
}

int main() {
    int cas = 0, m, n;

    while(cin >> m >> n) {
        vector<vector<char>> grid;
        grid.resize(m, vector<char>(n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> grid.at(i).at(j);
            }
        }
        int stars = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid.at(i).at(j) == '-') {
                    explore_neighbors(grid, i, j);
                    stars++;
                }
            }
        }
        cout << "Case " << ++cas << ": " << stars << endl;

    }
}