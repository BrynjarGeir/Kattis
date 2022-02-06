#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    vector<vector<char>> parking;
    string line;
    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        cin >> line;
        for (int j = 0; j < C; j++) {
            parking[i].push_back(line[j]);            
        }
    }

    

}