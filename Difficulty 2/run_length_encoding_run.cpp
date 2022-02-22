#include <iostream>
#include <string>
using namespace std;

int main() {
    string line, ed, word, new_word;
    char current, prev;
    int counter, many;

    getline(cin, line);

    ed = line.substr(0,1);
    word = line.substr(2);

    if(ed == "E") {
        prev = '\0';
        counter = 0;
        new_word = "";
        for(char c: word) {
            if (prev == '\0') {
                prev = c;
                counter = 1;
            } else if (prev == c) {
                counter++;
            } else {
                new_word += prev;
                new_word += to_string(counter);
                counter = 1;
                prev = c;
            }
        }
        new_word += prev + to_string(counter);
    } else {
        new_word = "";
        for(int i = 0; i < word.size(); i += 2) {
            many = stoi(word.substr(i+1,1));
            for(int j = 0; j < many; j++) {
                new_word += word[i];
            }
        }
    }

    cout << new_word;
}