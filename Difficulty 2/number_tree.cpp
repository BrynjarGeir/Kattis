#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int H, ans, pos = 0,  pen = 0;
    string path;

    cin >> H >> path;

    ans = pow(2, H+1) - 1;

    for(int i = 0; i < path.size(); i++) {
        if(path[i] == 'L') {
            ans -= pow(2,pos) + pen;// + pen;
        } else {
            ans -= pow(2,pos) + pen;// + pen;
            pen++;
        }
        pos++;
        pen++;
    }

    cout << ans;
}