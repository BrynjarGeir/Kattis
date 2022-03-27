#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, char> keyboard_upper = {{"clank", 'A'}, {"bong", 'B'}, {"click", 'C'}, {"tap", 'D'}, {"poing", 'E'}, {"clonk", 'F'}, {"clack", 'G'}, {"ping", 'H'}, {"tip", 'I'}, {"cloing", 'J'}, {"tic", 'K'}, {"cling", 'L'}, {"bing", 'M'}, {"pong", 'N'}, {"clang", 'O'}, {"pang", 'P'}, {"clong", 'Q'}, {"tac", 'R'}, {"boing", 'S'}, {"boink", 'T'}, {"cloink", 'U'}, {"rattle", 'V'}, {"clock", 'W'}, {"toc", 'X'}, {"clink", 'Y'}, {"tuc", 'Z'}, {"whack", ' '}};
    map<string, char> keyboard_lower = {{"clank", 'a'}, {"bong", 'b'}, {"click", 'c'}, {"tap", 'd'}, {"poing", 'e'}, {"clonk", 'f'}, {"clack", 'g'}, {"ping", 'h'}, {"tip", 'i'}, {"cloing", 'j'}, {"tic", 'k'}, {"cling", 'l'}, {"bing", 'm'}, {"pong", 'n'}, {"clang", 'o'}, {"pang", 'p'}, {"clong", 'q'}, {"tac", 'r'}, {"boing", 's'}, {"boink", 't'}, {"cloink", 'u'}, {"rattle", 'v'}, {"clock", 'w'}, {"toc", 'x'}, {"clink", 'y'}, {"tuc", 'z'}, {"whack", ' '}};
    vector<char> ans;
    string press;
    int N;
    bool capslock = false, shift = false;
    cin >> N;

    while(N--) {
        cin >> press;
        if(press == "bump") capslock = !capslock;
        else if(press == "dink" || press == "thumb") shift = !shift;
        else if(press == "pop") {
            if(!ans.empty()) ans.pop_back();
        }
        else {
            if((capslock && !shift) || (!capslock && shift)) ans.push_back(keyboard_upper[press]);
            else ans.push_back(keyboard_lower[press]);
        }
    }

    for(int i = 0; i < ans.size(); i++) cout << ans.at(i);
}