#include <iostream>
#include <set>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int count = 0;
    set<char> vowels {'a','e','i','o','u'};

    for(char c: line) {
        if(vowels.find(tolower(c)) != vowels.end()) count++; 
    }

    cout << count;
    
}