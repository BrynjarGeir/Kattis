#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> characters(26,0);

    for(char c: s) {
        characters[c-'a']++;
    }

    int odds = 0;

    for(int c: characters) {
        if(c % 2 != 0) odds++;
    }

    if(odds > 0) cout << odds - 1;
    else cout << odds;
}