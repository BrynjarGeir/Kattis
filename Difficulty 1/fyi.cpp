#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;

    cin >> ans;

    if (ans.substr(0,3) == "555") {
        cout << 1;
    } else {
        cout << 0;
    }
}