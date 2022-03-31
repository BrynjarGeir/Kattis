#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    map<char, string> mapping;
    int n, m;
    cin >> n >> m;

    string line, mapped_to, arrow, sequence;
    char map_from;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, line);
        istringstream ss(line);
        ss >> map_from, ss >> arrow, ss >> mapped_to;
        mapping[map_from] = mapped_to;
    }

    cin >> sequence;

    for(int i = 0; i < m; i++) {
        string new_seq = "";
        for(char c: sequence) {
            if(mapping[c] != "") new_seq += mapping[c];
            else new_seq += c;
        }
        sequence = new_seq;
    }

    cout << sequence;
}