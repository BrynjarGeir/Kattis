#include <iostream>
using namespace std;

int main() {
    int T, N;
    string word;
    cin >> T;

    while(T--) {
        cin >> N >> word;
        int size = word.size();
        bool right = false, cut[size];
        if(size < 4) {cout << word << endl; continue;}
        for(int i = 0; i < N; i++) {
            int ct = size / 4;
            if(right) {
                for(int i = size-1; i >= size - 1 - ct; i--) {
                    cut[i] = true;
                }
            } else {
                int pos = 0;
                while(cut[pos] && i < size) pos++;
                for(int i = pos; i < pos + ct; i++) {
                    cut[i] = true;
                }
            }
            size -= ct;
            right = !right;
        }
        for(int i = 0; i < word.size(); i++) {
            if(!cut[i]) cout << word.at(i);
        }
        cout << endl;
    }
}