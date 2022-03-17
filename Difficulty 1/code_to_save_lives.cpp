#include <iostream>
using namespace std;

int main() {
    int t, num1, num2;
    string line, number;
    cin >> t;
    cin.ignore();

    while(t--) {
        getline(cin, line);
        number = "";
        for(char c: line) {
            if(c != ' ') number += c;
        }
        num1 = stoi(number);

        number = "";
        getline(cin, line);
        for(char c: line) {
            if(c != ' ') number += c;
        }
        num2 = stoi(number);
        
        num1 += num2;
        number = to_string(num1);

        for(char c: number) {
            cout << c << ' ';
        }
        cout << endl;
    }
}