#include <iostream>
using namespace std;

int main() {
    int N;
    string first, second, tmp;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> first;
        cin >> second;
        tmp = "";
        for (int j = 0; j < first.size(); j++) {
            if (first[j] == second[j]) {
                tmp += ".";
            } else {
                tmp += "*";
            }
        }
        cout << first << endl << second << endl << tmp << endl << endl;
    }
}