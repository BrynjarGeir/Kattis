#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int level, x, y, max_x, max_y, min_x, min_y;
    string tile;
    cin >> tile;
    level = tile.size();

    min_x = min_y = 0;
    max_x = max_y = pow(2,level)-1;

    for (char c: tile) {
        if (c == '0') {
            max_x -= (max_x - min_x)/2 + 1;
            max_y -= (max_y - min_y)/2 + 1;
        } else if (c == '1') {
            min_x += (max_x-min_x)/2 + 1;
            max_y -= (max_y-min_y)/2 + 1;
        } else if (c == '2') {
            max_x -= (max_x-min_x)/2 + 1;
            min_y += (max_y-min_y)/2 + 1;
        } else {
            min_x += (max_x-min_x)/2 + 1;
            min_y += (max_y-min_y)/2 + 1;
        }
    }



    cout << level << " " << max_x << " " << max_y;

}