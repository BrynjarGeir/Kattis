#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    int n;
    string fn, ln, co;
    map<string, set<string>> courses;
    cin >> n;

    while(n--) {
        cin >> fn >> ln >> co;
        courses[co].insert(fn + " " + ln);
    }

    for(auto c: courses) cout << c.first << " " << c.second.size() << endl;
}