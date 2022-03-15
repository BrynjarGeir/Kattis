#include <iostream>
using namespace std;

int main() {
    int R, C;
    string line;
    cin >> R >> C;
    char parking[R][C];

    for (int i = 0; i < R; i++) {
        cin >> line;
        for (int j = 0; j < C; j++) {
            parking[i][j] = line.at(j);           
        }
    }

    int crushes[5] = {0,0,0,0,0};

    for(int i = 0; i < R-1; i++) {
        for(int j = 0; j < C-1; j++) {
            if(parking[i][j] == '#' || parking[i+1][j] == '#' || parking[i][j+1] == '#' || parking[i+1][j+1] == '#') continue;
            int crush = 0;
            if(parking[i][j] == 'X') crush++;
            if(parking[i+1][j] == 'X') crush++;
            if(parking[i][j+1] == 'X') crush++;
            if(parking[i+1][j+1] == 'X') crush++;
            crushes[crush]++;
        }
    }

    cout << crushes[0] << endl << crushes[1] << endl << crushes[2] << endl << crushes[3] << endl << crushes[4];

    

}