#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    string hexagon, word;
    char center;
    cin >> hexagon >> n;
    set<char> letters;
    for(auto c: hexagon) letters.insert(c);
    center = hexagon.at(0);
    for(int i = 0; i < n; i++) {
        cin >> word;
        if(word.size() < 4) continue;
        bool center_in = false, mis_match = false;
        for(auto c: word) {
            if(c == center) center_in = true;
            else if(letters.find(c) == letters.end()) {
                mis_match = true;
                break;
            }
        }

        if (center_in && !mis_match) {
            cout << word << endl;
        }

    }
}