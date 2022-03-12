#include <iostream>
using namespace std;

int main() {
    string line, ans;
    cin >> line;

    for(char c: line) {
        if(c == '<') ans.pop_back();
        else ans.push_back(c);
    }

    cout << ans;
}