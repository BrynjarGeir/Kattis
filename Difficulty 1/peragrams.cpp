#include <iostream>
#include <map>
using namespace std;

int main() {
    string word;
    map<char, int> m;
    cin >> word;

    if (word.empty()) {
        cout << 0;
        return 0;
    }
    
    for(char c: word) {
        if(m.find(c) != m.end()) {
            m[c]++;
        } else {
            m[c] = 1;
        }
    }
    int counter = 0;
    if(word.size() % 2 == 0) {
        map<char, int>::iterator it;
        for(it = m.begin(); it != m.end(); it++) {
            if(it->second % 2 == 0) continue;
            else counter++;
        }
    } else {
        map<char, int>::iterator it;
        bool first = true;
        for(it = m.begin(); it != m.end(); it++) {
            if(it->second % 2 == 0) continue;
            else if(first) first = false;
            else counter++; 
        }
    }

    cout << counter;
}