#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, det;
    int i = 1;
    while(i <= 5 && cin >> a >> b >> c >> d) {
        det = a*d - b*c;
        if(det == 0) return 0;
        a *= det, b *= det, c *= det, d *= det;

        cout << "Case " << i << ":" << endl;
        cout << (int)d << " " << -(int)b << endl;
        cout << -(int)c << " " << (int)a << endl;
        i++;
    }
}