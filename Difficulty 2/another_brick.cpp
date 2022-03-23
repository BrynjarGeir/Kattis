#include <iostream>
using namespace std;

int main() {
    int h, w, n, current_height = 0, current_width = 0, current_brick;
    cin >> h >> w >> n;

    while(n-- && current_height < h && current_width <= w) {
        cin >> current_brick;
        if(current_width + current_brick == w) {
            current_width = 0;
            current_height++;
        } else {
            current_width += current_brick;
        }
    }

    if(current_width == 0 && current_height == h) cout << "YES";
    else cout << "NO";
}