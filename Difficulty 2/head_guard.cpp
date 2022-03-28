#include <iostream>
using namespace std;

int main() {
    int count;
    string line;
    char prev;

    while(cin >> line) {
        count = 0;
        prev = '0';
        for(auto c: line) {
            if(prev == '0') {
                prev = c;
                count++;
            } else if(c == prev) count++;
            else if(c != prev) {
                cout << count << prev;
                count = 1;
                prev = c;
            }
        }
        cout << count << prev << endl;
    }
}