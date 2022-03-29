#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<char, string> to_m() {
    map<char, string> morseList;
    morseList['A'] = ".-";
    morseList['B'] = "-...";
    morseList['C'] = "-.-.";
    morseList['D'] = "-..";
    morseList['E'] = ".";
    morseList['F'] = "..-.";
    morseList['G'] = "--.";
    morseList['H'] = "....";
    morseList['I'] = "..";
    morseList['J'] = ".---";
    morseList['K'] = "-.-";
    morseList['L'] = ".-..";
    morseList['M'] = "--";
    morseList['N'] = "-.";
    morseList['O'] = "---";
    morseList['P'] = ".--.";
    morseList['Q'] = "--.-";
    morseList['R'] = ".-.";
    morseList['S'] = "...";
    morseList['T'] = "-";
    morseList['U'] = "..-";
    morseList['V'] = "...-";
    morseList['W'] = ".--";
    morseList['X'] = "-..-";
    morseList['Y'] = "-.--";
    morseList['Z'] = "--..";
    morseList['_'] = "..--";
    morseList['.'] = "---.";
    morseList[','] = ".-.-";
    morseList['?'] = "----";
    return morseList;
}

map<string, char> to_c() {
    map<string, char> morseList;
    morseList[".-"] = 'A';
    morseList["-..."] = 'B';
    morseList["-.-."] = 'C';
    morseList["-.."] = 'D';
    morseList["."] = 'E';
    morseList["..-."] = 'F';
    morseList["--."] = 'G';
    morseList["...."] = 'H';
    morseList[".."] = 'I';
    morseList[".---"] = 'J';
    morseList["-.-"] = 'K';
    morseList[".-.."] = 'L';
    morseList["--"] = 'M';
    morseList["-."] = 'N';
    morseList["---"] = 'O';
    morseList[".--."] = 'P';
    morseList["--.-"] = 'Q';
    morseList[".-."] = 'R';
    morseList["..."] = 'S';
    morseList["-"] = 'T';
    morseList["..-"] = 'U';
    morseList["...-"] = 'V';
    morseList[".--"] = 'W';
    morseList["-..-"] = 'X';
    morseList["-.--"] = 'Y';
    morseList["--.."] = 'Z';
    morseList["..--"] = '_';
    morseList["---."] = '.';
    morseList[".-.-"] = ',';
    morseList["----"] = '?';
    return morseList;
}

int main() {
    string message;
    map<char, string> to_morse = to_m();
    map<string, char> to_char = to_c();

    while (cin >> message) {
        string length = "", tm = "";
        for(auto c: message) {
            length += '0' + to_morse[c].size();
            tm += to_morse[c];
        }
        reverse(length.begin(), length.end());
        string ans = "", curr_morse;
        int pos = 0;
        for(int i = 0; i < length.size(); i++) {
            int p = length.at(i) - '0';
            ans += to_char[tm.substr(pos, p)];
            pos += p;
        }
        cout << ans << endl;
    }   
    
}