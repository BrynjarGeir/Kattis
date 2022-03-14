#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, current;
    map<int, pair<int,int>> rolls;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> current;
        if(rolls.find(current) == rolls.end()) {
            rolls[current] = make_pair(i+1, 1);
        } else {
            rolls[current].second++;
        }
    }

    map<int, pair<int, int>>::iterator it;
    pair<int, int> highest = make_pair(-1, -1);
    for(it = rolls.begin(); it != rolls.end(); it++) {
        if(it->second.second == 1) {
            if(highest.second < it->first) {
                highest.second = it->first;
                highest.first = it->second.first;
            }
        }
    }

    if(highest.first == -1) cout << "none";
    else cout << highest.first;
}