#include <iostream>
using namespace std;

int main() {
    string name, new_name = "";
    cin >> name;

    for (char c: name) {
        if (c != new_name.back()) {
            new_name += c;
        }
    }

    cout << new_name;
}