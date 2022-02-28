#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    string verdict;
    set<string> type_o_verdicts;
    map<string, int> rulings_1, rulings_2;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> verdict;
        if(rulings_1.find(verdict) != rulings_1.end()) {
            rulings_1[verdict]++;
        } else {
            rulings_1[verdict] = 1;
            type_o_verdicts.insert(verdict);
        }
    }

    for(int i = 0; i < n; i++) {
        cin >> verdict;
        if(rulings_2.find(verdict) != rulings_2.end()) {
            rulings_2[verdict]++;
        } else {
            rulings_2[verdict] = 1;
            type_o_verdicts.insert(verdict);
        }
    }

    int max_same = 0;
    for(string v: type_o_verdicts) {
        bool v1 = rulings_1.find(v) != rulings_1.end(), v2 = rulings_2.find(v) != rulings_2.end();
        if(v1 && v2) {
            max_same += min(rulings_1[v], rulings_2[v]);
        }
    }

    cout << max_same;
}