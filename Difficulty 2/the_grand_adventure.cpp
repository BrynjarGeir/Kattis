#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main() {
    int n;
    bool success;
    string adventure;
    map<char, char> mapping = {{'t','|'}, {'b', '$'}, {'j', '*'}};
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        success = true;
        stack<char> backpack;
        getline(cin, adventure);
        for(auto p: adventure) {
            if(p == '$' || p == '|' || p == '*') backpack.push(p);
            else if(p == 't' || p == 'j' || p == 'b') {
                if(backpack.empty() || backpack.top() != mapping[p]) {
                    success = false;
                    break;
                }
                backpack.pop();
            }
        }
        if(success && backpack.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}