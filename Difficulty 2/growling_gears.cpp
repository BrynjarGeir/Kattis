#include <iostream>
using namespace std;

int main() {
    int T, n;
    double a, b, c;
    cin >> T;

    while(T--) {
        cin >> n;
        double max_torque = -1, max_pos = -1, torque;
        for(int i = 1; i <= n; i++) {
            cin >> a >> b >> c;
            torque = b*b/(4*a) + c;
            if(torque > max_torque) {
                max_torque = torque;
                max_pos = i;
            }
        }
        cout << max_pos << endl;
    }
}