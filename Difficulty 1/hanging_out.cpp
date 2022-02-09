#include <iostream>
using namespace std;

int main() {
    int L, x, people = 0, denied = 0, entering;
    string party;
    cin >> L >> x;

    for (int i = 0; i < x; i++) {
        cin >> party >> entering;
        if (party == "leave") {
            people -= entering;
        } else {
            if (people + entering > L) {
                denied++;
            } else {
                people += entering;
            }
        }
    }
    cout << denied;
}