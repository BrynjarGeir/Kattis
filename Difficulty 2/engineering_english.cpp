#include <iostream>
#include <set>
using namespace std;

string to_lower(string word) {
    string new_word = "";
    for(char c: word) new_word += tolower(c);
    return new_word;
}

int main() {
    set<string> words;
    string word, new_text = "";

    while(cin >> word && word != "") {
        if(words.find(to_lower(word)) != words.end()) {
            new_text += ". ";
        } else {
            new_text += word + " ";
            words.insert(to_lower(word));
        }
    }

    cout << new_text.substr(0,new_text.size()-1);
}