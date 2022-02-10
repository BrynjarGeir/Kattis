#include <iostream>
using namespace std;

int main() {
    int n, victories = 0;
    string line;
    bool won;

    getline(cin, line);
    n = stoi(line);

    for(int i = 0; i < n; i++) {
        getline(cin, line);
        won = true;
        for(int j = 0; j < line.size() - 1; j++) {
            if (line[j] == 'C' && line[j+1] == 'D') {
                won = false;
                break;
            }
        }
        if (won) victories++;
    }

    cout << victories;
}