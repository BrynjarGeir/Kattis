#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    char grid[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }
    vector<string> words;
    //Search horizontally
    for(int i = 0; i < R; i++) {
        string current = "";
        for(int j = 0; j < C; j++) {
            if(grid[i][j] == '#') {
                if(current.size() >= 2) words.push_back(current);
                current = "";
            } else {
                current += grid[i][j];
            }
        }
        if(current.size() >= 2) words.push_back(current);
    }
    //Search vertically
    for(int j = 0; j < C; j++) {
        string current = "";
        for(int i = 0; i < R; i++) {
            if(grid[i][j] == '#') {
                if(current.size() >= 2) words.push_back(current);
                current = "";
            } else {
                current += grid[i][j];
            }
        }
        if(current.size() >= 2) words.push_back(current);
    }

    sort(words.begin(), words.end());
    cout << words.front();
}