#include <iostream>
using namespace std;

int main() {
    int f, s;

    while (cin >> f >> s && (f != 0 || s != 0)) {
        int carries = 0, rem_f, rem_s, curr_carry = 0;
        while (f > 0 || s > 0) {
            rem_f = f % 10, rem_s = s % 10;
            if (rem_f + rem_s + curr_carry > 9) {
                carries++;
                curr_carry = 1;
                f /= 10, s /= 10;
            } else {
                f /= 10, s /= 10;
                curr_carry = 0;
            }
        }
        if (carries == 0) {
            cout << "No carry operation." << endl;
        } else if(carries == 1){
            cout << carries << " carry operation." << endl;
        } else {
            cout << carries << " carry operations." << endl;
        }
    }
}