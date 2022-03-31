#include <iostream>
using namespace std;

int main() {
    int i = 1;
    string line;

    while(getline(cin, line) && line != "END") {
        if(line.size() == 1) {cout << i++ << " EVEN" << endl; continue;}
        int space = -1, prev_space = -1;
        bool even = true;
        for(auto c: line) {
            if(c == '*') {
                if(space == -1) space = 0;
                else if(prev_space == -1) prev_space = space;
                else if(prev_space != space) {even = false; break;}
                space = 0;
            } else {
                space++;
            }
        }
        if(even) cout << i++ << " EVEN" << endl;
        else cout << i++ << " NOT EVEN" << endl;
    }
}