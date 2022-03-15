#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, p;
    while(cin >> n && n != -1) {
        map<int, vector<int>> connections;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> p;
                if(p == 1) {
                    connections[i].push_back(j);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(connections.at(i).size() < 2) cout << i << " ";
            else {
                bool weak = true;
                for(int j = 0; j < connections.at(i).size(); j++) {
                    for(int k = 0; k < connections.at(i).size(); k+++) {
                        if(k != j && connections[connections[i].at(k)].find(j)) {
                            weak = false;
                            break;
                        }
                    }
                    if(!weak) break;
                }
                if(weak) cout << i << " ";
            }
        }
    }
}