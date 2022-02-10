#include <iostream>
using namespace std;

int main() {
    double R, C, pi = 3.14159265359, area_C, area_R, ans;
    cin >> R >> C;
    C = R - C;

    area_R = pi * R * R;
    area_C = pi * C * C;

    ans = area_C / area_R;

    cout << fixed << ans*100;
    
}