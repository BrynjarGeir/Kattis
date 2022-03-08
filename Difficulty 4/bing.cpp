#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    string word;
    unordered_map<string, int> words;
    while(N--) {
        cin >> word;
        cout << words[word] << endl;
        for(int i = 1; i <= word.size(); i++) {
            words[word.substr(0,i)]++;
        }
    }


}