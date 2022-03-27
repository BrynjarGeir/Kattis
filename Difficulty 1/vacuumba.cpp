#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << fixed << setprecision(6);
    int n, m;
    cin >> n;
    while(n--) {
        cin >> m;
        double x = 0, y = 0, angle = 90, a, dist;
        while(m--) {
            cin >> a >> dist;
            angle += a;
            x += cos(angle*M_PI/180)*dist;
            y += sin(angle*M_PI/180)*dist;
        }
        cout << x << " " << y << endl;
    }
}