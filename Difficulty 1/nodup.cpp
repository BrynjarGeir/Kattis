#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> words;
    string line, tmp = "";
    bool dupl = false;
    getline(cin, line);

    for (char c: line) {
        if (c == ' ') {
            if (words.count(tmp)) {
                dupl = true;
                break;
            }
            words.insert(tmp);
            tmp = "";
        } else {
            tmp.push_back(c);
        }
    }
    if (words.count(tmp)) {
        dupl = true;
    }

    if(dupl) {
        cout << "no";
    } else {
        cout << "yes";
    }
}