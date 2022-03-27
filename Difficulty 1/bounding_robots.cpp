#include <iostream>
using namespace std;

int main() {
    int w, l, n, dist;
    char dir;

    while(cin >> w >> l && !(w == 0 && l == 0)) {
        pair<int, int> thinks = {0, 0}, actually = {0, 0};
        cin >> n;
        while(n--) {
            cin >> dir >> dist;
            if(dir == 'u') {
                thinks.second += dist;
                actually.second = min(l-1, actually.second + dist);
            } else if(dir == 'r') {
                thinks.first += dist;
                actually.first = min(w-1, actually.first + dist);
            } else if(dir == 'l') {
                thinks.first -= dist;
                actually.first = max(0, actually.first - dist);
            } else {
                thinks.second -= dist;
                actually.second = max(0, actually.second - dist);
            }
        }
        cout << "Robot thinks " << thinks.first << " " << thinks.second << endl;
        cout << "Actually at " << actually.first << " " << actually.second << endl << endl;
    }
}