#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != -1) {
        int grid[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
    }
}