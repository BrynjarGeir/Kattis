#include <iostream>
using namespace std;

int main() {
    string word;
    double words = 0, occ = 0;
    while(cin >> word) {
        words++;
        for(int i = 0; i < word.size()-1; i++) {
            if(word.at(i) == 'a' && word.at(i+1) == 'e') {
                occ++;
                break;
            }
        }
    }
    if (words == 0 || occ/words >= 0.4) cout << "dae ae ju traeligt va";
    else cout << "haer talar vi rikssvenska";
}