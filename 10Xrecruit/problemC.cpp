#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int m, n;
    double r, degree, minutes, seconds;
    cin >> m;
    cout << fixed;

    for(int i = 0; i < m; i++) {
        cin >> r >> n >> degree >> minutes >> seconds;
        minutes += seconds / 60;
        degree += minutes / 60;
        if(fmod(360,degree) == 0 && minutes == 0 && n*degree >= 360) {
            double area = (degree/360) * M_PI * r * r;
            cout << area;
        } else if(n*degree < 360) {
            double theta_area = (degree/360) * M_PI * r * r;
            double left_area = ((360 - n*degree)/360) * M_PI * r * r;
            cout << max(theta_area, left_area);
        } else {
            double cuts[n+1];
            double d = 0;
            for(int j = 0; j <= n; j++) {
                cuts[j] = d;
                d += degree;
                if(d >= 360) d -= 360;
            }
            sort(cuts, cuts + n + 1);
            double max_difference = -1;
            for(int j = 0; j < n; j++) {
                max_difference = max(max_difference, cuts[j+1] - cuts[j]);
            }
            max_difference = max(max_difference, 360-cuts[n] + cuts[0]);

            cout << (max_difference/360) * M_PI * r * r;
        }

        if(i != m-1) cout << endl;
    }
}