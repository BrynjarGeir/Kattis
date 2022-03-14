#include <iostream>
using namespace std;

int main() {
    int n, courses;
    string name, bpss, dob;
    cin >> n;

    while(n--) {
        cin >> name >> bpss >> dob >> courses;

        if(stoi(bpss.substr(0,4)) >= 2010) {
            cout << name << " eligible";
        } else if(stoi(dob.substr(0,4)) >= 1991) {
            cout << name << " eligible";
        } else if(courses >= 41) {
            cout << name << " ineligible";
        } else {
            cout << name << " coach petitions";
        }

        if(n != 0) cout << endl;
    }
}