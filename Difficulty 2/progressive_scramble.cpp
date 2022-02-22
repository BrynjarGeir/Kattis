#include <iostream>
#include <vector>
using namespace std;

string encrypt(string text, string s) {
    string new_text = "";
    int prev = -1, pos;
    for(char c: text) {
        if (prev == -1) {
            prev = s.find(c);
            new_text += s[prev];
        } else {
            pos = (s.find(c) + prev) % 27;
            new_text += s[pos];
            prev = pos;
        }
    }
    return new_text;
}

string decrypt(string text, string s) {
    string new_text = "";
    int prev = -1, pos;
    for(char c: text) {
        if (prev == -1) {
            prev = s.find(c);
            new_text += s[prev];
        } else {
            pos = (s.find(c) - prev + 27) % 27;
            new_text += s[pos];
            prev = s.find(c);
        }
    }
    return new_text;
}

int main() {
    int N, pos, prev;
    string text, line, new_text, s = " abcdefghijklmnopqrstuvwxyz";
    vector<int> numbers;
    char ed;

    getline(cin, line);

    N = stoi(line);

    for(int i = 0; i < N; i++) {
        getline(cin, line);
        ed = line[0];
        text = line.substr(2);
        
        if (ed == 'e') {
            cout << encrypt(text, s) << endl;
        } else {
            cout << decrypt(text, s) << endl;
        }

    }
}