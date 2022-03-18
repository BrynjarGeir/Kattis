#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    string word;

    while(cin >> word) {
        words.push_back(word);
    }
    vector<string> compound_words;
    for(int i = 0; i < words.size(); i++) {
        for(int j = 0; j < words.size(); j++) {
            if(i == j) continue;
            compound_words.push_back(words.at(i) + words.at(j));
        }
    }

    sort(compound_words.begin(), compound_words.end());

    cout << compound_words.front() << endl;
    for(int i = 1; i < compound_words.size(); i++) {
        if(compound_words.at(i) == compound_words.at(i-1)) continue;
        cout << compound_words.at(i) << endl;
    }
}