#include <iostream>
using namespace std;

int main() {
    int n,k;
    string name, dish;
    bool ps, pa;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> k;
        cin.ignore();
        getline(cin,name);
        ps = false, pa = false;
        for(int j = 0; j < k; j++) {
            getline(cin, dish);
            if(dish == "pea soup") ps = true;
            else if(dish == "pancakes") pa = true;

            if(ps && pa) {
                cout << name;
                return 0;
            }
        }
    }

    cout << "Anywhere is fine I guess";
}