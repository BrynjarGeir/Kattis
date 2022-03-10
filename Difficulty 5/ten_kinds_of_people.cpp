#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int dRow[] = { 0, 1, 0, -1 };
int dCol[] = { -1, 0, 1, 0 };
const int r;
const int c;

bool isValid(bool visited[r][c], char grid[r][c], int row, int col, int R, int C, char c) {
    if (row < 0 || row >= R || col < 0 || col >= C) return false;
    if(visited[row][col]) return false;
    if(grid[row][col] != c) return false;
    return true;
}

bool dfs(int row, int col, int R, int C, char grid[r][c], bool visited[r][c], char c, int target_row, int target_col) {
    stack<pair<int, int>> st;
    st.push({row, col});

    while(!st.empty()) {
        pair<int, int> curr = st.top();
        st.pop();
        row = curr.first;
        col = curr.second;

        if(!isValid(visited, grid, row, col, R, C, c)) continue;
        if(row == target_row && col = target_col) return true;
        visited[row][col] = true;
        for(int i = 0; i < 4; i++) {
            int adjx = row + dRow[i];
            int adjy = col + dCol[i];
            st.push({adjx, adjy});
        }


    }
}

int main()  {
    int n, r1, c1, r2, c2;
    string line;
    getline(cin, line);
    r = stoi(line.substr(0, line.find(' ')));
    c = stoi(line.substr(line.find(' ')+1));
    char grid[r][c];

    for(int i = 0; i < r; i++) {
        getline(cin, line);
        for(int j = 0; j < c; j++) {
            grid[i][j] = line[j];
        }
    }

    getline(cin, line);
    n = stoi(line);

    for(int i = 0; i < n; i++) {
        getline(cin, line);
        isstringstream ss(line);
        ss >> r1, ss >> c1, ss >> r2, ss >> c2;
        if(grid[r1][c1] != grid[r2][c2]) cout << "neither" << endl;
        else {
            bool visited[r][c];
            bool reaches = dfs(r1, c1, r, c, grid, visited, grid[r1][c1], r2, c2);
            if(reaches && grid[r1][c1] == '1') cout << "decimal" << endl;
            else if(reaches) cout << "binary" << endl;
            else cout << "neither" << endl;
        }
    }
}