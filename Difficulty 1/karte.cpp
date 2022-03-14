#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> P, K, H, T;
    string line;
    cin >> line;

    for(int i = 0; i < line.size(); i += 3) {
        if(line.at(i) == 'P') {
            int card = stoi(line.substr(i+1,2));
            if(P.find(card) != P.end()) {
                cout << "GRESKA";
                return 0;
            }
            P.insert(card);
        } else if(line.at(i) == 'K') {
            int card = stoi(line.substr(i+1,2));
            if(K.find(card) != K.end()) {
                cout << "GRESKA";
                return 0;
            }
            K.insert(card);
        } else if(line.at(i) == 'H') {
            int card = stoi(line.substr(i+1,2));
            if(H.find(card) != H.end()) {
                cout << "GRESKA";
                return 0;
            }
            H.insert(card);
        } else if(line.at(i) == 'T') {
            int card = stoi(line.substr(i+1,2));
            if(T.find(card) != T.end()) {
                cout << "GRESKA";
                return 0;
            }
            T.insert(card);
        }
    }

    cout << 13 - P.size() << " " << 13 - K.size() << " " << 13 - H.size() << " " << 13 - T.size();
}