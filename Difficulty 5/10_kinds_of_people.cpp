#include <bits/stdc++.h>
using namespace std;

int dRow[4] = { 0, 1, 0, -1 };
int dCol[4] = { -1, 0, 1, 0 };


bool isValid(vector<vector<bool>> visited, vector<vector<char>> grid, int row, int col, char c) {
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid.front().size()) return false;
    if(visited.at(row).at(col)) return false;
    if(grid.at(row).at(col) != c) return false;
    return true;
}

bool dfs(int row, int col, vector<vector<char>> grid, vector<vector<bool>> visited, char c, int target_row, int target_col) {
    stack<pair<int, int>> st;
    st.push({row, col});

    while(!st.empty()) {
        pair<int, int> xy = st.top();
        st.pop();
        row = xy.first;
        col = xy.second;

        if(!isValid(visited, grid, row, col, c)) continue;
        if(row == target_row && col == target_col) return true;
        visited.at(row).at(col) = true;
        for(int i = 0; i < 4; i++) {
            int adjx = row + dRow[i];
            int adjy = col + dCol[i];
            st.push({adjx, adjy});
        }
    }
    return false;
}

int main()  {
    int n, r1, c1, r2, c2, r, c;
    string line;
    cin >> r >> c;
    cin.ignore();
    vector<vector<char>> grid(r);

    for(int i = 0; i < r; i++) {
        getline(cin, line);
        for(char c: line) {
            grid.at(i).push_back(c);
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> r1 >> c1 >> r2 >> c2;
        if(grid.at(r1-1).at(c1-1) != grid.at(r2-1).at(c2-1)) cout << "neither" << endl;
        else {
            vector<vector<bool>> visited(r, vector<bool> (c, false));
            bool reaches = dfs(r1-1, c1-1, grid, visited, grid.at(r1-1).at(c1-1), r2-1, c2-1);
            if(reaches && grid.at(r1-1).at(c1-1) == '1') cout << "decimal" << endl;
            else if(reaches) cout << "binary" << endl;
            else cout << "neither" << endl;
        }
    }
}