#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        string s;
        cin >> s;
        int n = floor(sqrt(s.size()));
        if(n*n < s.size()) n++;
        char grid[n][n];
        int pos = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(pos < s.size()) grid[i][j] = s.at(pos++);
                else grid[i][j] = '*';
            }
        }

        string ans = "";
        for(int i = 0; i < n; i++) {
            for(int j = n-1; j >= 0; j--) {
                if(grid[j][i] != '*') ans += grid[j][i];
            }
        }

        cout << ans;
        if(N != 0) cout << endl;
    }
}