#include <iostream>
using namespace std;

int main() {
    int T, R, C;
    char symbol;
    cin >> T;

    for(int i = 1; i <= T; i++) {
        cout << "Test " << i << endl;
        cin >> R >> C;
        string image[R];
        for(int j = 0; j < R; j++) {
            string line = "";
            for(int k = 0; k < C; k++) {
                cin >> symbol;
                line = symbol + line;
            }
            image[j] = line;
        }

        for (int j = R-1; j >= 0; j--) {
            cout << image[j] << endl;
        }
    }
}