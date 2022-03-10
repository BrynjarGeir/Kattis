#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string word;

    for(int i = 1; i <= n; i++) {
        cin >> word;
        if(word == "mumble" || stoi(word) == i) continue;
        cout << "something is fishy";
        return 0;
    }

    cout << "makes sense";
}