#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string phrase, ans, n;
    set<char> letters;

    getline(cin, n);
    N = stoi(n);

    for (int i = 0; i < N; i++) {
        letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        getline(cin,phrase);
        for (char c: phrase) {
            if (isalpha(c) && letters.find(tolower(c)) != letters.end()) {
                letters.erase(tolower(c));
            }
        }
        if (letters.empty()) {
            cout << "pangram" << endl;
        } else {
            ans = "";
            for (char s:letters) {
                ans += s;
            }
            cout << "missing " << ans << endl;
        }
    }
}