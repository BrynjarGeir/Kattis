#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main() {
    int m, n;
    char first, second;
    string fw, sw;
    map<char, vector<char>> proj;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        proj[first].push_back(second);
    }

    for(int i = 0; i < n; i++) {
        cin >> fw >> sw;
        if(fw.size() != sw.size()) {
            cout << "no" << endl;
        } else {
            set<char> visited;
            int pos = 0;
            for(int j = 0; j < sw.size(); j++) {
                if(sw.at(j) != fw.at(j) && proj.find(fw.at(j)) == proj.end()) {
                    cout << "no" << endl;
                    break;
                } else if(sw.at(j) != fw.at(j) && visited.find(fw.at(j)) != visited.end()) {
                    cout << "no" << endl;
                    break;
                } else if(sw.at(j) != fw.at(j) && visited.find(fw.at(j)) == visited.end()) {
                    visited.add(fw.at(j));
                    
                }
            }
        }
    }
}