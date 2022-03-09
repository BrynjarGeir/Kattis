#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
    int ca = 200;
    string first_name, second_name;
    vector<pair<string, string>> names;
    set<string> already_appeared;
    set<string> appears_often;

    while(cin >> first_name && cin >> second_name) {
        names.push_back(make_pair(second_name, first_name));
        if(already_appeared.find(first_name) != already_appeared.end()) {
            appears_often.insert(first_name);
        } else {
            already_appeared.insert(first_name);
        }
    }

    sort(names.begin(), names.end());

    for(auto n: names) {
        if(appears_often.find(n.second) != appears_often.end()) {
            cout << n.second << " " << n.first << endl;
        } else {
            cout << n.second << endl;
        }
    }
}