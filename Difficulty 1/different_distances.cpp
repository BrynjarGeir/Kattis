#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int main() {
    double x1, x2, y1, y2, p, p_norm;
    string line;
    cout << fixed;
    int b = 1000;
    while(b--) {
        getline(cin, line);
        if(line == "0") break;
        else {
            stringstream ss(line);
            ss >> x1, ss >> y1, ss >> x2, ss >> y2, ss >> p;
        }
        p_norm = pow(pow(abs(x1-x2), p) + pow(abs(y1-y2), p), 1/p);
        cout << p_norm << endl;
    }
}