#include <iostream>
using namespace std;

int main() {
    string Y, P;
    cin >> Y >> P;

    if (Y.substr(Y.length()-2) == "ex") {
        cout << Y + P;
    } else if (Y.back() == 'e') {
        cout << Y + 'x' + P;
    } else if (Y.back() == 'a' || Y.back() == 'i' || Y.back() == 'o' || Y.back() == 'u') {
        Y.pop_back();
        cout << Y + "ex" + P;
    } else {
        cout << Y + "ex" + P;
    }
}