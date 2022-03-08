#include <iostream>
#include <set>
using namespace std;

int main() {
    int problems, upper_right = 8, upper_left = 8, lower_right = 8, lower_left = 8;
    bool left = true, right = true;
    string tooth, problem;
    cin >> problems;

    for(int i = 0; i < problems; i++) {
        cin >> tooth >> problem;
        if(problem == "b" && (tooth.find("+") == 0 || tooth.find("-") == 0)) left = false;
        else if(problem == "b" && (tooth.find("+") == 1 || tooth.find("-") == 1)) right = false;
        if(!left && !right) {
            cout << 2;
            return 0;
        }
        if(problem == "m" && tooth.find("+") == 0) upper_left--;
        else if(problem == "m" && tooth.find("-") == 0) lower_left--;
        else if(problem == "m" && tooth.find("+") == 1) upper_right--;
        else if(problem == "m" && tooth.find("-") == 1) lower_right--;

        if (lower_left < 1 && upper_right < 1 && upper_left < 1 && lower_right < 1) {
            cout << 2;
            return 0;
        }
    }

    if(left) {
        if(upper_left > 0 && lower_left > 0) {
            cout << 0;
            return 0;
        }
    } else if(right) {
        if(upper_right > 0 && lower_right > 0) {
            cout << 1;
            return 0;
        }
    }
    cout << 2;
}