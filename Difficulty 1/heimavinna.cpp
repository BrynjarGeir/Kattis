#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    int ans = 0;

    getline(cin, str);

    string tmp = "";
    for(char c: str) {
        if (c==';') {
            size_t pos = tmp.find('-');
            if (pos == string::npos) {
                ans += 1;
            } else {
                int first = stoi(tmp.substr(0,pos));
                int second = stoi(tmp.substr(pos+1));
                ans += second - first + 1;
            }
            tmp = "";
        } else {
            tmp.push_back(c);
        }
    }
    size_t pos = tmp.find('-');
    if (pos == string::npos) {
        ans += 1;
    } else {
        int first = stoi(tmp.substr(0,pos));
        int second = stoi(tmp.substr(pos+1));
        ans += second - first + 1;
    }
    cout << ans;
}