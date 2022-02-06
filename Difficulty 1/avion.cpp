#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> counter;
    string blimp;

    for (int i = 1; i <= 5; i++) {
        cin >> blimp;
        if (blimp.find("FBI") != string::npos) {
            counter.push_back(i);
        }
    }

    if (!counter.empty()) {
        for (int i: counter) {
            cout << i << " ";
        }
    } else {
        cout << "HE GOT AWAY!";
    }
}