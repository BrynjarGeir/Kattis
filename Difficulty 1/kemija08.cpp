#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> vowels{'a','e','i','o','u'};
    string line, new_line = "";
    getline(cin, line);

    for(int i = 0; i < line.size()-1; i++) {
        if(line.at(i) == 'p' && i != 0 && line.at(i-1) == line.at(i+1) && vowels.find(line.at(i-1)) != vowels.end()) {
            i++;
            continue;
        }

        new_line += line.at(i);
    }

    cout << new_line;

}