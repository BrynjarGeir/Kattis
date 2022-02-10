#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    set<string> compound_words;
    string word;

    while (getline(cin, word)) {
        if (word == "") break;
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); i++) {
            if (i == j) continue;
            compound_words.insert(words[i] + words[j]);
        }
    }
    vector<string> ans;
    auto it = compound_words.begin();
    while (it != compound_words.end()) {
        ans.push_back(*it);
        it++;
    }

    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

}