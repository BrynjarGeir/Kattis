#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        cin.ignore();
        map<string, vector<string>> who_ordered;
        string line;
        while(n--) {
            getline(cin, line);
            istringstream ss(line);
            string name, item;
            ss >> name;
            while(ss >> item) {
                who_ordered[item].push_back(name);
            }
        }
        for(auto p: who_ordered) {
            cout << p.first << " ";
            sort(p.second.begin(), p.second.end());
            for(auto name: p.second) {
                cout << name << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}