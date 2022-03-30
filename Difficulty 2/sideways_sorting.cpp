#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int compare_ignore(string a, string b) {
    string c = "", d = "";
    for(char i: a) c += tolower(i);
    for(char i: b) d += tolower(i);
    return c.compare(d);
}

int main() {
    int r,c;

    while(cin >> r >> c && r != 0) {
        string ns[c];
        char strings[r][c];
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> strings[i][j];
            }
        }
        for(int j = 0; j < c; j++) {
            string curr_string = "";
            for(int i = 0; i < r; i++) {
                curr_string += strings[i][j];
            }
            ns[j] = curr_string;
        }

        sort(ns, ns + c, compare_ignore);

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << ns[j][i];
            }
            cout << endl;
        }
    }
}