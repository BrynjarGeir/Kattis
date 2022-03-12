#include <iostream>
#include <map>
using namespace std;

int main() {
    string line, first, second;
    map<string, string> dictionary;

    while(getline(cin,line) && line != "") {
        int pos = line.find(' ');
        first = line.substr(0,pos);
        second = line.substr(pos+1);

        dictionary[second] = first;
    }

    while(getline(cin, line)) {
        cout << dictionary[line] << endl;
    }
}