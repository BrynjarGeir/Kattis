#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main() {
    int S, x, y, dx, dy;

    while(cin >> S >> x >> y >> dx >> dy && S != 0) {
        map<pair<int, int>, bool> mapping;
        int squareX = x / S + 1, squareY = y / S + 1;
        mapping[{x - S*squareX, y - S * squareY}] = true;
        int jumps = 0;
        while((squareX + squareY) % 2 == 0 && ++jumps) {
            x += dx;
            y += dy;
            squareX = x / S + 1, squareY = y / S + 1;
            if(mapping[{x - S * squareX, y - S * squareY}]) break;
            mapping[{x - S * squareX, y - S * squareY}] = true;
        }

        if((squareX + squareY) % 2 != 0) cout << "After " << jumps << " jumps the flea lands at (" << x << ", " << y << ")." << endl;
        else cout << "The flea cannot escape from black squares." << endl;
    }
}