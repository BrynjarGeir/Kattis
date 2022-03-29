#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string dom, codom;

    while(getline(cin, dom) && getline(cin, codom)) {
        istringstream sd(dom), sc(codom);
        map<string, int> domain, codomain;
        map<string, string> mapping;
        string word, f, a, t;
        sd >> word, sc >> word;
        bool bijective = true, surjective = true, injective = true, function = true;
        while(sd >> word) domain[word] = 0;
        while(sc >> word) codomain[word] = 0;

        getline(cin, word);
        int proj = stoi(word);

        for(int i = 0; i < proj; i++) {
            getline(cin, word);
            istringstream ss(word);
            ss >> f >> a >> t;
            domain[f]++;
            codomain[t]++;
        }

        for(auto c: domain) if(c.second > 1) function = false;
        if(!function) {cout << "not a function" << endl; continue;}
        for(auto c: codomain) {
            if(c.second != 1) bijective = false;
            if(c.second > 1) injective = false;
            if(c.second == 0) surjective = false;
        }


        if(bijective) cout << "bijective" << endl;
        else if(injective) cout << "injective" << endl;
        else if(surjective) cout << "surjective" << endl;
        else cout << "neither injective nor surjective" << endl;
    }
}