#include <iostream>
using namespace std;

int main() {
    string line;
    double lower=0, upper=0, space=0, symbols=0, s;

    getline(cin, line);
    s = (double)line.size();

    for (char c: line) {
        if (islower(c)) {
            lower++;
        } else if (isupper(c)) {
            upper++;
        } else if (c == ' ') {
            space++;
        } else {
            symbols++;
        }
    }
    cout << fixed << space / s << endl;
    cout << fixed << lower / s << endl;
    cout << fixed << upper / s << endl;
    cout << fixed << symbols / s << endl;
}