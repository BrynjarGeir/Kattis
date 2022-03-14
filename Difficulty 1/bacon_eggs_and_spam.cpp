#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        cin.ignore();
        map<string, vector<string>> ords;
        string line;
        for(int i = 0; i < n; i++) {
            getline(cin, line);
            string cust = line.substr(0, line.find(' '));
            line = line.substr(line.find(' ')+1);
            while(!line.empty()) {
                string item = line.substr(0,line.find(' '));
                ords[item].push_back(cust);
                line = line.substr(line.find(' ')+1);
            }
        }
        map<string, vector<string>>::iterator it;
        for(it = ords.begin(); it != ords.end(); it++) {
            cout << it->first << " ";
            for(int i = 0; i < it->second.size(); i++) {
                cout << it->second.at(i) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}