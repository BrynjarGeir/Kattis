#include <iostream>
#include <set>
using namespace std;

int main() {
    int R, C;
    string line;
    set<pair<int, int>> visited;

    cin >> R >> C;

    char map[R][C];

    for(int i = 0; i < R; i++) {
        cin >> line;
        int j = 0;
        for(char c: line) {
            map[i][j] = c;
            j++;
        }
    }

    int r = 0, c = 0, steps = 0;

    while(true) {
        if (visited.find(make_pair(r, c)) != visited.end()) {
            cout << "Lost";
            return 0;
        } else if(r < 0 || c < 0 || r >= R || c >= C) {
            cout << "Out";
            return 0;
        }
        else visited.insert(make_pair(r,c));
        char curr = map[r][c];
        if(curr == 'N') r--;
        else if(curr == 'S') r++;
        else if(curr == 'W') c--;
        else if(curr == 'E') c++;
        else {
            cout << steps;
            return 0;
        }
        steps++;
    }
}