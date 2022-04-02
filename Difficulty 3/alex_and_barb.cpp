#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    bool alexs_turn = true;
    cin >> k >> m >> n;

    while(k) {
        if(k >= m + n) k -= m;
        else if(k > n) k -= n;
        else k = 0;
        alexs_turn = !alexs_turn;
    }

    if(!alexs_turn) cout << "Barb";
    else cout << "Alex";

    
}