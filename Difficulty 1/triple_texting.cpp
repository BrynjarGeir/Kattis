#include <iostream>
using namespace std;

int main() {
    string s, first, second, third;
    cin >> s;

    first = s.substr(0,s.size() / 3);
    second = s.substr(s.size() / 3, 2 * s.size() / 3);
    third = s.substr(2 * s.size() / 3);

    for(int i = 0; i < s.size() / 3; i++) {
        if(first[i] == second[i] && first[i] == second[i]) continue;
        else {
            if(first[i] == second[i]) cout << first;
            else cout << third;
            return 0;
        }
    }

    cout << first;
    

    
}