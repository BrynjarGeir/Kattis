#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int gold, N, E, G, X;
    string command;
    vector<pair<int, int>> quests;
    cin >> N;

    while(N--) {
        cin >> command;
        if(command == "add") {
            cin >> E >> G;
            quests.push_back({E, G});
        } else {
            sort(quests.begin(), quests.end());
            cin >> X;
            gold = 0;
            for(int i = quests.size() - 1; i >= 0; i--) {
                if(X >= quests.at(i).first) {
                    gold += quests.at(i).second;
                    X -= quests.at(i).first;
                    auto it = quests.begin();
                    it += i;
                    quests.erase(it);
                }
            }
            cout << gold << endl;
        }
    }
}
