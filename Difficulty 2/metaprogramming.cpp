#include <iostream>
#include <map>
using namespace std;

int main() {
    int number;
    string command, cmp, first, second;
    map<string, int> mapping;
    std::cout.setf(std::ios::boolalpha);

    while(cin >> command) {
        if(command == "define") {
            cin >> number >> first;
            mapping[first] = number;
        } else {
            cin >> first >> cmp >> second;
            if(mapping.find(first) == mapping.end() || mapping.find(second) == mapping.end()) cout << "undefined" << endl;
            else if(cmp == "=") {
                cout << (mapping[first] == mapping[second]) << endl;
            } else if(cmp == ">") {
                cout << (mapping[first] > mapping[second]) << endl;
            } else {
                cout << (mapping[first] < mapping[second]) << endl;
            }
        }
    }
}