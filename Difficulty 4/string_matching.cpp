#include <iostream>
using namespace std;

int main() {
    string pattern, word;
    while(getline(cin, pattern)) {
        getline(cin, word);
        size_t pos = word.find(pattern, 0);
        while(pos != string::npos) {
            cout << pos << " ";
            pos = word.find(pattern, pos+1);
        }
        cout << endl;
    }
}