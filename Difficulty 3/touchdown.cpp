#include <iostream>
using namespace std;

int main() {
    int N, plays = 4, pos = 20, prev = 20, current;
    cin >> N;

    while(N--) {
        if(plays == 0) {
            cout << "Nothing";
            return 0;
        }
        cin >> current;
        pos += current;
        if(pos >= 100) {
            cout << "Touchdown";
            return 0;
        } else if(pos <= 0) {
            cout << "Safety";
            return 0;
        } else {
            if(pos >= prev + 10) {
                plays = 4;
                prev = pos;
            }
            else {
                plays--;
            }
        }
    }

    cout << "Nothing";
}