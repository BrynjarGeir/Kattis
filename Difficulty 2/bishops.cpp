#include <iostream>
using namespace std;

int main() {
    int i;

    while(cin >> i) {
        if(i == 1) cout << 1 << endl;
        else cout << 2 * i - 2 << endl;
    }
}