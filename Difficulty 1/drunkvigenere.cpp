#include <iostream>
using namespace std;

int main() {
    string encr, key, decry = "";
    int shifted, pos;
    cin >> encr >> key;

    for(int i = 0; i < encr.size(); i++) {
        if(i % 2 == 1) {
            shifted = key.at(i) - 'A';
            pos = encr.at(i) - 'A';
            pos += shifted;
            pos %= 26;
            decry += (char)('A' + pos);
        } else {
            shifted = key.at(i) - 'A';
            pos = encr.at(i) - 'A';
            pos -= shifted;
            if(pos < 0) pos += 26;
            decry += (char)('A' + pos);
        }
    }

    cout << decry;

}