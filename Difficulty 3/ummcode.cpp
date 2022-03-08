#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string line, code = "", word;
    getline(cin, line);

    for(char c: line) {
        if(c == ' ') {
            bool is_code = true;
            string possible_add = "";
            for(char i: word) {
                int j = (int)i;
                if((j > 47 && j < 58) || (j > 64 && j < 91) || (j > 96 && j < 126 && (i != 'u' && i != 'm'))) {
                    is_code = false;
                    break;
                }
                if(i == 'u' || i == 'm') possible_add += i;
            }
            if(is_code) code += possible_add;
            word = "";
        } else {
            word += c;
        }
    }
    bool is_code = true;
    string possible_word = "";
    for(char c: word) {
        int j = (int)c;
        if((j > 47 && j < 58) || (j > 64 && j < 91) || (j > 96 && j < 126 && (c != 'u' && c != 'm'))) {
            is_code = false;
            break;
        }
        if(c == 'u' || c == 'm') possible_word += c;
    }
    if(is_code) code += possible_word;
    
    string decrypted = "";
    for(int i = 0; i < code.size(); i += 7) {
        int m = 0, p = 0;
        for(int j = 6; j >= 0; j--) {
            if(code[i+j] == 'u') {
                m += pow(2,p);
            }
            p++;
        }
        decrypted += (char)m;
    }

    cout << decrypted;

}