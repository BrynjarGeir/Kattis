#include <iostream>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for (int j = 0; j < tests; j++) {
        string number;
        int curr_number, ans = 0;
        cin >> number;
        int size = number.size();
        bool second = false;

        for(int i = 1; i <= size; i++) {
            curr_number = stoi(number.substr(size-i, 1));

            if (second) curr_number *= 2;
            if (curr_number > 9) {
                ans += curr_number % 10 + 1;
            } else {
                ans += curr_number;
            }
            second = !second;
        }
        if (ans % 10 == 0) {
            cout << "PASS " << endl;
        } else {
            cout << "FAIL " << endl;
        }
    }
}