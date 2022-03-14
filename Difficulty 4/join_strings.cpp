#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> strs;
    int N, a, b;
    string word;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> word;
        strs[i] = word;
    }

    for(int i = 0; i < N-1; i++) {
        cin >> a >> b;
        string new_word = strs[a] + strs[b];
        strs[a] = new_word;
        strs[b] = "";
    }

    cout << strs[a];
}