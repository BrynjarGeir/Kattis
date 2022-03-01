#include <iostream>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    char prev = 'A';
    double occ = 0, words = 1;
    for(char c: sentence) {
        if(prev == 'A') prev = c;
        else if (c == ' ') {
            words++;
            prev = 'A';
        }
        else {
            if(prev == 'a' && c == 'e') occ++;
        }
    }
    if (occ/words >= 0.4) cout << "dae ae ju traeligt va";
    else cout << "haer talar vi rikssvenska";
}