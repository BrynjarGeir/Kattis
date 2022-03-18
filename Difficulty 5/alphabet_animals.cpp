#include <bits/stdc++.h>
using namespace std;

int main() {
    string last_said, word;
    int n;
    map<char, vector<string>> starts_with, ends_with;
    vector<string> words;

    cin >> last_said >> n;

    while(n--) {
        cin >> word;
        starts_with[word.front()].push_back(word);
        ends_with[word.back()].push_back(word);
    }

    if(starts_with[last_said.back()].empty()) cout << '?';
    else {
        for(auto word: starts_with[last_said.back()]) {
            if(ends_with[word.back()].empty()) {
                cout << word << '!';
                return 0;
            } else if(word.front() == word.back() && starts_with[word.back()].size() == 1) {
                cout << word << '!';
                return 0;
            }
        }
        cout << starts_with[last_said.back()].front();
    }
}