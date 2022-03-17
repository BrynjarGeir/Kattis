#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N, M, ingredient, concoctions = 0;
    bool ingredients[500001];
    set<vector<int>> in_pot;

    cin >> N;

    while(N--) {
        cin >> M;
        bool can_concoct = true;
        vector<int> current_pot;
        while(M--) {
            cin >> ingredient;
            if(ingredients[ingredient]) {
                can_concoct = false;
                break;
            }
            ingredients[ingredient] = true;
        }
        if(can_concoct) concoctions++;
        while(M > 0) {
            cin >> ingredient;
            M--;
        }
    }

    cout << concoctions;
}