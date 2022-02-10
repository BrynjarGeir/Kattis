#include <iostream>
using namespace std;

int main() {
    int width, w, h, curr_w, curr_h, max_h_line, max_width;

    cin >> width;
    while(width != 0) {
        curr_w = 0;
        curr_h = 0;
        max_h_line = 0;
        max_width = 0;
        cin >> w >> h;
        while(w != -1 && h != -1) {
            if(curr_w + w > width) {
                curr_h += max_h_line;
                max_h_line = h;
                max_width = max(max_width, curr_w);
                curr_w = w;
            } else {
                max_h_line = max(max_h_line, h);
                curr_w += w;
            }
            cin >> w >> h;
        }
        curr_h += max_h_line;

        cout << max(max_width, curr_w) << " x " << curr_h << endl;

        cin >> width;
    }
}