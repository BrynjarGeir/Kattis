#include <iostream>
using namespace std;

int main() {
    int P, T, count = 0;
    string word;
    cin >> P >> T;

    for(int i = 0; i < P; i++) {
        bool passes_tests = true;
        for(int j = 0; j < T; j++) {
            bool passes_this_test = true;
            cin >> word;
            word = word.substr(1);
            for(char c: word) {
                if(c != tolower(c)) {
                    passes_this_test = false;
                    break;
                }
            }
            if(!passes_this_test) {
                passes_tests = false;
                break;
            }
        }
        if(passes_tests) count++;
    }

    cout << count;
}