#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int H;
    string path;
    cin >> H >> path;

    int cur = 1;
    for(char c: path) cur = cur * 2 + (c == 'R');
    cout << (1<<(H+1)) - cur;
}