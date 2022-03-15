#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ls(vector<int> cards, int s, int low, int high) {
    if(low >= high) return false;
    if(cards[low] + cards[high] == s) return true;
    if(cards[low] + cards[high] > s) return ls(cards, s, low, --high);
    if(cards[low] + cards[high] < s) return ls(cards, s, ++low, high);
    return false;
}

int main() {
    int n, s;
    string number;
    cin >> n >> s;
    vector<int> cards, rotated_cards;

    for(int i = 0; i < n; i++) {
        cin >> number;
        bool cant_rotate = false;
        string new_number = "";
        for(char c: number)  {
            if(c == '3' || c== '4' || c == '7') {
                cant_rotate = true;
                break;
            } else if(c == '6') {
                new_number += '9';
            } else if(c == '9') {
                new_number += '6';
            } else {
                new_number += c;
            }
        }
        reverse(new_number.begin(), new_number.end());
        cards.push_back(stoi(number));
        if(!cant_rotate) rotated_cards.push_back(stoi(new_number));
    }

    for(int i: rotated_cards) {
        if(find(cards.begin(), cards.end(), i) == cards.end()) {
            cards.push_back(i);
        }
    }
    sort(cards.begin(), cards.end());

    for(int i: cards) {
        cout << i << endl;
    }

    if(ls(cards, s, 0, cards.size() - 1)) cout << "YES";
    else cout << "NO";
}