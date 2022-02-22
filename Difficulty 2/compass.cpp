#include <iostream>
using namespace std;

int main() {
    int current, correct, change_left, change_right;
    
    cin >> current;
    cin >> correct;

    if (current == correct) {
        cout << 0;
        return 0;
    } else if ( current < correct) {
        change_left = correct - current;
        change_right = 360 - correct + current;
        if(change_left > change_right) {
            cout << -change_right;
        } else {
            cout << change_left;
        }
    } else {
        change_left = correct + 360 - current;
        change_right = current - correct;
        if(change_left > change_right) {
            cout << -change_right;
        } else {
            cout << change_left;
        }
    }
}