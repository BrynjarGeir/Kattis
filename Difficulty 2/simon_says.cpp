#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    string line;
    cin >> T;
    cin.ignore();
    while(T--) {
        getline(cin, line);
        if(line.find("simon says") == 0) {
            line.erase(0,11);
            cout << line << endl;
        } else cout << endl;
    }
}