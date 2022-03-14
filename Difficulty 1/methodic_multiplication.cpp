#include <iostream>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    if(first == "0" || second == "0") cout << 0;
    else {
        int count_first = 0, count_second = 0;
        for(char c: first) {
            if (c == 'S') count_first++;
            else if(c == '0') break;
        }
        for(char c: second) {
            if(c == 'S') count_second++;
            else if(c == '0') break;
        }

        int mult = count_first * count_second;
        string ans = "";
        for(int i = 0; i < mult; i++) {
            ans += "S(";
        }
        ans += "0";
        for(int i = 0; i < mult; i++) {
            ans += ")";
        }
        cout << ans;
    }
}