#include <iostream>
#include <set>
using namespace std;

string normalize(string phrase) {
    string ans = "";
    for(auto c: phrase) {
        if(c == '-') ans += ' ';
        else ans += tolower(c);
    }
    return ans;
}

int main() {
    set<string> unique;
    string line;
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        getline(cin, line);
        line = normalize(line);
        unique.insert(line);
    }

    cout << unique.size();
}