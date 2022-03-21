#include <iostream>
using namespace std;

int main() {
    string stones;
    cin >> stones;
    int black = 0, white = 0;

    for(char c: stones) {
        if(c == 'W') white++;
        else black++;
    }

    if(white == black) cout << 1;
    else cout << 0;
}