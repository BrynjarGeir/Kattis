#include <iostream>
using namespace std;

int main() {
    string prev, curr;
    int n;

    cin >> prev;
    cin >> n;
    string words[n];

    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    int atleast_matches = -1;
    for(int i = 0; i < n; i++) {
        if(prev.back() == words[i].front()) {
            atleast_matches = i;
            bool not_right = false;
            for(int j = 0; j < n; j++) {
                if(i != j && words[i].back() == words[j].front()) {
                    not_right = true;
                }
            }
            if(!not_right) {
                cout << words[i] << "!";
                return 0;
            }
        }
    }

    if(atleast_matches != -1) {
        cout << words[atleast_matches];
        return 0;
    }

    cout << "?";


}