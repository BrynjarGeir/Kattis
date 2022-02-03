#include <iostream>
using namespace std;

int main() {
    string str, ans = "";
    bool s = true;
    cin >> str;

    for (char c: str) {
        if (s) {
            ans.push_back(c);
            s = false;
        }
        if (c == '-') {
            s = true;
        }
    }
    cout << ans;
}