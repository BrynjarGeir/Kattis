#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    string action, name;
    set<string> names_inside;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> action >> name;
        if (action == "entry") {
            if (names_inside.find(name) != names_inside.end()) {
                cout << name << " entered " << "(ANOMALY)" << endl;
            } else {
                cout << name << " entered " << endl;
                names_inside.insert(name);
            }
        } else {
            if (names_inside.find(name) != names_inside.end()) {
                cout << name << " exited " << endl;
                names_inside.erase(name);
            } else {
                cout << name << " exited " << "(ANOMALY)" << endl;
            }
        }
    }
}