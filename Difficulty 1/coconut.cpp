#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> hands;

    for(int i = 0; i < 2*n; i++) hands.push_back(make_pair(i/2, 4));

    int pos = s;
    while(hands.size() > 1) {
        if(hands[pos].second > 0) {
            hands[pos].second--;
            pos += s;
            pos %= hands.size();
        } else {
            hands.erase(hands.begin() + pos);
        }
    }

    cout << hands.front().first;


    
}