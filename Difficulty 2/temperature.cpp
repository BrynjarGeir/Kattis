#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    cout << fixed;
    if(X == 0 && Y == 1) cout << "ALL GOOD";
    else if(X == 0) cout << 0;
    else if(X != 0 && Y == 1) cout << "IMPOSSIBLE";
    else {
        cout << - X / (Y - 1);
    }
}