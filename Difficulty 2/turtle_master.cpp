#include <iostream>
using namespace std;

int main() {
    char grid[8][8];
    char c;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> c;
            grid[i][j] = c;
        }
    }
    pair<int, int> pos = make_pair(7,0);
    char direction = 'E';
    string instructions;
    cin >> instructions;

    for(char c: instructions) {
        if (c == 'F' && direction == 'E') pos.second++;
        else if (c == 'F' && direction == 'N') pos.first--;
        else if (c == 'F' && direction == 'W') pos.second--;
        else if(c == 'F' && direction == 'S') pos.first++;
        if(pos.first < 0 || pos.first > 7 || pos.second < 0 || pos.second > 7 || (grid[pos.first][pos.second] != '.' && grid[pos.first][pos.second] != 'D')) {
            cout << "Bug!";
            return 0;
        }
        else if(grid[pos.first][pos.second] == 'D') {
            cout << "Diamond!";
            return 0;
        }
        else if(c == 'R' && direction == 'E') direction = 'S';
        else if(c == 'R' && direction == 'N') direction = 'E';
        else if(c == 'R' && direction == 'W') direction = 'N';
        else if(c == 'R' && direction == 'S') direction = 'W';
        else if(c == 'L' && direction == 'E') direction = 'N';
        else if(c == 'L' && direction == 'N') direction = 'W';
        else if(c == 'L' && direction == 'W') direction = 'S';
        else if(c == 'L' && direction == 'S') direction = 'W';
        
        if(c == 'X' && direction == 'N' && pos.first > 0 && grid[pos.first-1][pos.second] == 'I') grid[pos.first - 1][pos.second] = '.';
        else if(c == 'X' && direction == 'E' && pos.second < 7 && grid[pos.first][pos.second + 1] == 'I') grid[pos.first][pos.second + 1] = '.';
        else if(c == 'X' && direction == 'S' && pos.first < 7 && grid[pos.first + 1][pos.second] == 'I') grid[pos.first + 1][pos.second] = '.';
        else if(c == 'X' && direction == 'W' && pos.first > 0 && grid[pos.first-1][pos.second] == 'I') grid[pos.first-1][pos.second] = '.';
        else if(c == 'X'){cout << "Bug!"; return 0;}

    }
}