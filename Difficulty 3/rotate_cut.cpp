#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, N;
    string word;
    cin >> T;

    while(T--) {
        cin >> N >> word;
        bool right = true;

        for(int i = 0; i < N; i++) {
            if(!right) {
                word = word.substr(0, word.size() - word.size() / 4);
            } else {
                word = word.substr(word.size() / 4);
            }

            right = !right;
        }

        cout << word;
        if(T != 0) cout << endl;
    }


}