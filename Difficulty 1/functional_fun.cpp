#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {
    int n;
    string domain, codomain;

    while(getline(cin, domain)) {
        domain = domain.substr(8);
        istringstream iss(domain);
        set<string> d, cd;
        string word;
        while(iss >> word) {
            d.insert(word);
        }
        getline(cin, codomain);
        codomain = codomain.substr(10);
        iss(codomain);
        while(iss >> word) {
            cd.insert(word);
        }

        cin >> n;
        cin.ignore();

        while(n--) {
            getline(cin, word);
            
        }
    }
}