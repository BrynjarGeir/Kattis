#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> circle = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
                                {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14}, {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18},
                                {'T', 19}, {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}};
    string encr, key, decry = "";
    int shifted, pos;
    char new_char;
    cin >> encr >> key;

    for(int i = 0; i < encr.size(); i++) {
        if(i % 2 == 0) {
            shifted = circle[key.at(i)];
            pos = circle[encr.at(i)];
            pos += shifted;
            pos %= 26;
            new_char = 'A' + pos;
            cout << pos << " " << shifted << " " << new_char << endl;
            decry += new_char;
        } else {
            shifted = circle[key.at(i)];
            pos = circle[encr.at(i)];
            pos -= shifted;
            if(pos < 0) pos += 26;
            new_char = 'A' + pos;
            cout << pos << " " << shifted << " " << new_char << endl;
            decry += new_char;
        }
    }

    cout << decry;

}