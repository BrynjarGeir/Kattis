#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double pi = M_PI;
    double radius, total, inside, factor, area, square;
    string tmp1, tmp2, tmp3, tmp;
    int pos;
    string line;

    while (getline(cin, line)) {
        if (line == "0 0 0") break;
        tmp = "";
        pos = 0;
        for (char c: line) {
            if (c == ' ') {
                if (pos == 0) {
                    tmp1 = tmp;
                    pos += 1;
                } else {
                    tmp2 = tmp;
                }
                tmp = "";
            } else {
                tmp += c;
            }
        }
        tmp3 = tmp;
        radius = stod(tmp1);
        total = stod(tmp2);
        inside = stod(tmp3);
        factor = inside / total;
        square = 4 * radius * radius;
        area = radius * radius * pi;

        cout << fixed << area << " " << square * factor << endl;
    }
}