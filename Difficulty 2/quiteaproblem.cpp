#include <iostream>
#include <sstream>
using namespace std;

string lo(string word) {
    string ans = "";
    for(char c: word) ans += tolower(c);
    return ans;
}

int main() {
    string line, word;

    while(getline(cin, line)) {
        line = lo(line);
        if(line.find("problem") != string::npos) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}