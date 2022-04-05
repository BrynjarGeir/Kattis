#include <iostream>
using namespace std;

int main() {
    string order;
    cin >> order;
    int always_up = 0, always_down = 0, as_you_like = 0;
    char state_up = order.front(), state_down = order.front(), state_like = order.front();

    for(char c: order.substr(1)) {
        if(c == 'U') {
            if(state_down == 'D') always_down += 2;
            else if(state_down == 'U') always_down += 1;
            if(state_up == 'D') always_up += 1;
        } else {
            if(state_up == 'D') always_up += 1;
            else if(state_up == 'U') always_up += 2;
            if(state_down == 'U') always_down += 1;
        }

        if(state_like != c) as_you_like++;
        state_down = 'D', state_up = 'U', state_like = c;
    }

    cout << always_up << endl << always_down << endl << as_you_like;
}