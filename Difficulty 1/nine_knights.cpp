#include <iostream>
using namespace std;

bool safe(pair<int, int> knight, char table[5][5]) {
    int i = knight.first, j = knight.second;
    if(i+2 < 5 && j+1 < 5 && table[i+2][j+1] == 'k') return false;
    if(i+2 < 5 && j-1 >= 0 && table[i+2][j-1] == 'k') return false;
    if(i-2 >= 5 && j-1 >= 0 && table[i-2][j-1] == 'k') return false;
    if(i-2 >= 0 && j+1 < 5 && table[i-2][j+1] == 'k') return false;
    if(i+1 < 5 && j+2 < 5 && table[i+1][j+2] == 'k') return false;
    if(i+1 < 5 && j+2 < 5 && table[i+1][j+2] == 'k') return false;
    if(i-1 >= 0 && j-2 >= 0 && table[i-1][j-2] == 'k') return false;
    if(i-1 >= 0 && j-2 >= 0 && table[i-1][j-2] == 'k') return false;

    return true;
}

int main() {
    char table[5][5];
    pair<int, int> knights[9];
    int how_many = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> table[i][j];
            if(table[i][j] == 'k') {
                knights[how_many] = {i,j};
                how_many++;
            }
        }
    }
    if(how_many != 9) {
        cout << "invalid";
        return 0;
    }
    for(int i = 0; i < 9; i++) if(!safe(knights[i], table)) {
        cout << "invalid";
        return 0;
    }

    cout << "valid";



}