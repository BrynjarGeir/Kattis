#include <iostream>
#include <set>
using namespace std;

int main() {
    int wrong = 0;
    string word, guess;
    cin >> word;
    cin >> guess;
    set<char> letters;

    for (char c: word) {
        letters.insert(c);
    }

    for (char g: guess) {
        if (letters.find(g) != letters.end()) {
            letters.erase(g);
        } else {
            wrong++;
        }
        if (wrong > 9) {
            cout << "LOSE";
            break;
        } else if (letters.empty()) {
            cout << "WIN";
            break;
        }
    }
}