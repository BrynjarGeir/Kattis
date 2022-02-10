#include <iostream>
using namespace std;

int main() {
    string scores;
    int a = 0, b = 0;
    cin >> scores;

    for(int i = 0; i < scores.size(); i += 2) {
        if (scores[i] == 'A') {
            if (scores[i+1] == '2') {
                a += 2;
            } else {
                a += 1;
            }
        } else {
            if (scores[i+1] == '2') {
                b += 2;
            } else {
                b += 1;
            }
        }
        if ((a >= 11 || b >= 11)  && abs(a-b) >= 2) {
            if (a > b) {
                cout << "A";
            } else {
                cout << "B";
            }
        }

    }
}