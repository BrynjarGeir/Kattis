#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int NG, NM, monster;
        cin >> NG >> NM;
        deque<int> godzilla, mechagodzilla;
        for(int i = 0; i < NG; i++) {
            cin >> monster;
            godzilla.push_back(monster);
        }
        for(int i = 0; i < NM; i++) {
            cin >> monster;
            mechagodzilla.push_back(monster);
        }

        sort(godzilla.begin(), godzilla.end());
        sort(mechagodzilla.begin(), mechagodzilla.end());

        while(!godzilla.empty() && !mechagodzilla.empty()) {
            if(godzilla.front() < mechagodzilla.front()) godzilla.pop_front();
            if(mechagodzilla.front() <= godzilla.front()) mechagodzilla.pop_front();
        }

        if(godzilla.empty()) cout << "MechaGodzilla" << endl;
        else if(mechagodzilla.empty()) cout << "Godzilla" << endl;
        else cout << "uncertain" << endl;
    }
}