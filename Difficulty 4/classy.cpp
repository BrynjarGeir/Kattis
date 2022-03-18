#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cmpS(pair<string, string> f, pair<string, string> s) {
    for(int i = 0; i < min(f.first.size(), s.first.size()); i++) {
        if((int)f.first.at(i) < (int)s.first.at(i)) return 1;
        else if((int)f.first.at(i) > (int)s.first.at(i)) return 0;
    }
    if(f.first.size() > s.first.size()) {
        for(int i = s.first.size(); i < f.first.size(); i++) {
            if(f.first.at(i) == '1') return 1;
            else if(f.first.at(i) == '3') return 0;
        }
    } else {
        for(int i = f.first.size(); i < s.first.size(); i++) {
            if(s.first.at(i) == '1') return 0;
            else if(s.first.at(i) == '3') return 1;
        }
    }
    return !f.second.compare(s.second);
}

int main() {
    int T, n;
    cin >> T;
    while(T--) {
        cin >> n;
        string name, classes, line;
        vector<pair<string, string>> nc;
        while(n--) {
            cin >> name;
            cin >> line;
            string cl = "", i = "";
            for(char c: line) {
                if(c == '-') {
                    if(cl == "lower") i = '3' + i;
                    else if(cl == "middle") i = '2' + i; 
                    else i = '1' + i;
                    cl = "";
                } else {
                    cl += c;
                }
            }
            if(cl == "lower") i = '3' + i;
            else if(cl == "middle") i = '2' + i; 
            else i = '1' + i;
            nc.push_back(make_pair(i, name.substr(0,name.size()-1)));
            cin >> line;
        }
        
        sort(nc.begin(), nc.end(), cmpS);
        for(auto p: nc) {
            cout << p.second << endl;
        }
        cout << "==============================" << endl;

        //cout << cmpS({"23222", "dad"}, {"2322", "unclebob"}) << endl << cmpS({"111", "queen"}, {"2311", "mom"}) << endl << cmpS({"33", "chair"}, {"2311", "mom"});
    }
}