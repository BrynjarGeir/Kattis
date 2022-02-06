#include <iostream>
#include <map>
using namespace std;

int main() {
    string card1, card2, card3, card4, card5;
    cin >> card1 >> card2 >> card3 >> card4 >> card5;

    map<char, int> cards = {{'A', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}, {'T', 0}, {'J', 0}, {'Q', 0}, {'K', 0}};

    cards[card1[0]] += 1;
    cards[card2[0]] += 1;
    cards[card3[0]] += 1;
    cards[card4[0]] += 1;
    cards[card5[0]] += 1;

    int maxRank = 0;
    map<char, int>::iterator it = cards.begin();
    while (it != cards.end()) {
        maxRank = max(maxRank, it->second);
        it++;
    }

    cout << maxRank;

}