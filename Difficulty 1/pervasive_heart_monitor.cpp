#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isFloat( string myString ) {
    istringstream iss(myString);
    float f;
    iss >> noskipws >> f;
    return iss.eof() && !iss.fail(); 
}

int main() {
    string line;
    while(getline(cin, line)) {
        istringstream iss(line);
        string curr, name = "";
        double total = 0, records = 0;
        while(iss >> curr) {
            if(isFloat(curr)) {
                total += stod(curr);
                records++;
            } else {
                name += curr + " ";
            }
        }

        cout << total / records << " " << name << endl;
    }
}