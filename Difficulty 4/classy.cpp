#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cmpS(const pair<string, string> f, const pair<string, string> s) {
    if (f.first.compare(s.first) == 0) {
        cout << "Eventually " << f.second << " " << s.second << " " << (f.second.compare(s.second)) << endl;
        return f.second.compare(s.second);
    }
    if(f.first.empty() && !s.first.empty()) {
        for(char c: s.first) {
            if(c == '1') return -1;
            else if(c == '3') return 1;
        }
        return cmpS(make_pair("", f.second), make_pair("", s.second));
    }
    if(!f.first.empty() && s.first.empty()) {
        for(char c: f.first) {
            if(c == '1') return 1;
            else if(c == '3') return -1;
        }
        return cmpS(make_pair("", f.second), make_pair("", s.second));
    }
    if(f.first.front() == s.first.front()) {
        pair<string, string> new_f = make_pair(f.first.substr(1), f.second), new_s = make_pair(s.first.substr(1), s.second);
        return cmpS(new_f, new_s);
    } else if (f.first.front() < s.first.front()) return -1;
    else return 1;
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
        /**
        sort(nc.begin(), nc.end());
        for(const pair<string, string> p: nc) {
            cout << p.first << " " << p.second << endl;
        }
        cout << "==============================" << endl;
        cout << cmpS(make_pair("2322", "unclebob"), make_pair("23222", "dad"));*/
        vector<pair<string, string>> test;
        test.push_back(make_pair("23222", "dad"));
        test.push_back(make_pair("2322", "unclebob"));
        sort(test.begin(), test.end(), cmpS);
        for(auto p: test) {
            cout << p.second << endl;
        }
        if(T != 0) cout << endl;
    }
}