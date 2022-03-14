#include <iostream>
using namespace std;

int main() {
    int C, n, left, entered, stay, current_occ = 0;

    cin >> C >> n;

    for(int i = 0; i < n; i++) {
        cin >> left >> entered >> stay;
        if(i == 0 && left != 0) {
            cout << "impossible";
            return 0;
        }
        current_occ += entered - left;
        if(current_occ < C && stay != 0) {
            cout << "impossible";
            return 0;
        }

        if(current_occ > C) {
            cout << "impossible";
            return 0;
        }
    }
    if(current_occ != 0) cout << "impossible";
    else cout << "possible";
}