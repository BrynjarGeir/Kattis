#include <iostream>
using namespace std;

int main() {
    int switches;
    string first, then;
    cin >> switches;
    cin >> first;
    cin >> then;

    if (switches % 2 != 0) {
        string tmp = "";
        for(char c: then) {
            if (c == '1') {
                tmp += '0';
            } else {
                tmp += '1';
            }
        }
        then = tmp;
    }


    if (first == then) {
        cout << "Deletion succeeded";
    } else {
        cout << "Deletion failed";
    }
}