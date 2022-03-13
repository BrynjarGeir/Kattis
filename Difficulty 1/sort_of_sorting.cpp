#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmpStr(pair<string, string> name_1, pair<string, string> name_2) {
    cout << name_1.first << " " << name_2.first << endl;
    return name_1.first.compare(name_2.first);
} 

int main() {
    int n;
    string name;
    while(cin >> n && n != 0) {
        vector<pair<string, string>> names;
        for(int i = 0; i < n; i++) {
            cin >> name;
            names.push_back(make_pair(name.substr(0,2), name));
        }

        sort(names.begin(), names.end(), cmpStr);

        for(int i = 0; i < n; i++) {
            cout << names[i].second << endl;
        }
        cout << endl;
    }
}