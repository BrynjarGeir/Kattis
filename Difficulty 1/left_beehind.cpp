#include <iostream>
using namespace std;

int main() {
    int x,y;

    while(cin >> x >> y && (x != 0 && y != 0)) {
        if(x + y == 13) cout << "Never speak again." << endl;
        else if(y > x) cout << "Left beehind." << endl;
        else if(x > y) cout << "To the convention" << endl;
        else cout << "Undecided" << endl;
    }
}