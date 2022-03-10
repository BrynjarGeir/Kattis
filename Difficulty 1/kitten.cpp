#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int, int> branches;
    int kitten, stem, leaf;
    string line;
    cin >> kitten;
    cin.ignore();

    getline(cin, line);

    while(line != "-1") {
        stem = stoi(line.substr(0,line.find(' ')));
        line = line.substr(line.find(' ')+1);
        while(!line.empty()) {
            if(line.find(' ') != string::npos) leaf = stoi(line.substr(0, line.find(' ')));
            else leaf = stoi(line);
            branches[leaf] = stem;
            if(line.find(' ') == string::npos) line = "";
            else line = line.substr(line.find(' ')+1);
        }

        getline(cin, line);
    }

    cout << kitten << " ";
    while(branches.find(kitten) != branches.end()) {
        kitten = branches[kitten];
        cout << kitten << " ";
    }


}