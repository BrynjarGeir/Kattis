#include <iostream>
using namespace std;

int main() {
    int lower = 0, higher = 1000, n = 10;
    string answer;

    while(lower <= higher && n--) {
        int middle = lower + (higher - lower) / 2;
        cout << middle << endl;
        cin >> answer;
        if(answer == "lower") {
            higher = middle;
        } else if(answer == "higher") {
            lower = middle + 1;
        } else {
            return 0;
        }
    }
}