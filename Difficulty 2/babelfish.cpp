#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string line, first, second, word;
    map<string, string> dictionary;

    while(getline(cin,line) && line != "") {
        istringstream ss(line);
        ss >> first, ss >> second;
        dictionary[second] = first;
    }

    while(getline(cin, word)) {
        if(dictionary[word] != "") cout << dictionary[word] << endl;
        else cout << "eh" << endl;
    }
}