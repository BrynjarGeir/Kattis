#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, W, H, match;


    cin >> N >> W >> H;

    double longest = sqrt(pow(W, 2) + pow(H,2));

    for (int i = 0; i < N; i++) {
        cin >> match;

        if (match <= longest) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
}