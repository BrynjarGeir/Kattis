#include <iostream>
#include <cctype>
#include <map>
using namespace std;

int main() {
    map<char, string> alphabet = {{'a', "@"}, {'b',"8"}, {'c', "("}, {'d', "|)"}, {'e',"3"}, {'f', "#"}, {'g', "6"}, {'h', "[-]"}, {'i',"|"}, {'j', "_|"}, {'k', "|<"}, {'l', "1"}, {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"}, {'p', "|D"}, {'q', "(,)"}, {'r',"|Z"}, {'s', "$"}, {'t',"']['"}, {'u', "|_|"}, {'v', "\\/"}, {'w',"\\/\\/"}, {'x', "}{"}, {'y',"`/"}, {'z', "2"}};
    string line, new_line = "";
    getline(cin, line);
    
    for(char c: line) {
        if(isalpha(c)) {
            char new_char = tolower(c);
            new_line += alphabet[new_char];
        } else {
            new_line += c;
        }
    }

    cout << new_line;

}