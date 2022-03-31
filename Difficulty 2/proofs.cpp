#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    map<string, bool> assumptions;
    int n;
    string line, word;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++) {
        getline(cin, line);
        istringstream ss(line);
        bool not_ok = false;
        while(ss >> word && word != "->") {
            if(!assumptions[word]) {not_ok = true; break;}
        }

        if(not_ok) {cout << i; return 0;}

        ss >> word;
        assumptions[word] = true;
    }

    cout << "correct";
}