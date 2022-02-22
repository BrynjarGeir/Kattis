#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    double tax = 0.10, minute, day = 0;
    string oc, ee, name;
    cin >> oc;
    while(oc == "OPEN") {
        day++;
        map<string, pair<int, int>> customers;
        while(true) {
            cin >> ee;
            if (ee == "CLOSED") break;
            cin >> name >> minute;
            if(customers.find(name) != customers.end()) {
                if (ee == "ENTER") {
                    customers[name].second = minute;
                } else {
                    customers[name].first += minute - customers[name].second;
                    customers[name].second = -1;
                }
            } else {
                customers[name] = make_pair(0, minute);
            }
        }
        cout << "day " << day << endl;
        map<string, pair<int, int>>::iterator it;
        for(it = customers.begin(); it != customers.end(); ++it) {
            cout << it->first << endl;
        }
        cin >> oc;
    }

}