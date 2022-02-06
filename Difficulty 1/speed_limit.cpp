#include <iostream>
using namespace std;

int main() {
    int sets, prev_hour, curr_miles, curr_hour, miles;
    cin >> sets;

    while (sets != -1) {
        prev_hour = 0;
        miles = 0;
        for (int i = 0; i < sets; i++) {
            cin >> curr_miles >> curr_hour;
            miles += curr_miles * (curr_hour - prev_hour);
            prev_hour = curr_hour;
        }

        cout << miles << " miles" << endl;
        cin >> sets;
    }
}