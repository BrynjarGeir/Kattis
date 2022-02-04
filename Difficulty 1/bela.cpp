#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> dominant = {{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}};
    map<char, int> ndominant = {{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}};
    char dom;
    string current;
    int hands, ans = 0;

    cin >> hands >> dom;

    for (int i = 0; i < 4*hands; i++) {
        cin >> current;
        if (current[1] == dom) {
            ans += dominant[current[0]];
        } else {
            ans += ndominant[current[0]];
        }
    }
    cout << ans;
}