#include <iostream>
using namespace std;

int main() {
    string S, P, revS;

    cin >> S >> P;

    if (S == P) {
        cout << "Yes";
    } else if (S.size() == P.size() + 1) {
        if ((S.substr(1) == P && isdigit(S.at(0))) || (S.substr(0,S.size()-1) == P && isdigit(S.at(S.size()-1)))) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if (S.size() == P.size()) {
        revS = "";
        for(char c: S) {
            if (isupper(c)) revS += tolower(c);
            else revS += toupper(c);
        }
        if (revS == P) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }
}