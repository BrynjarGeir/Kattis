#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, P, S, m, card;
    set<int> cards_chosen;
    cin >> N >> P >> S;

    for (int i = 0; i < S; i++) {
        cin >> m;
        cards_chosen.clear();
        for (int j = 0; j < m; j++) {
            cin >> card;
            cards_chosen.insert(card);
        }
        if (cards_chosen.find(P) != cards_chosen.end()) {
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
    }
}