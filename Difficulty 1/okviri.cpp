#include <iostream>
using namespace std;

int main() {
    string inp;
    cin >> inp;

    cout << "..#..";
    for(int i = 1; i < inp.size(); i++) {
        if((i + 1) % 3 == 0) cout << ".*..";
        else cout << ".#..";
    }
    cout << endl << ".#.#.";
    for(int i = 1; i < inp.size(); i++) {
        if((i + 1) % 3 == 0) cout << "*.*.";
        else cout << "#.#.";
    }
    cout << endl << "#." << inp.at(0) << ".#";
    for(int i = 1; i < inp.size(); i++) {
        if((i+1) % 3 == 0) cout << "*." << inp.at(i) << ".*";
        else if(i % 3 == 0) cout << "." << inp.at(i) << ".#";
        else if(i+1 < inp.size() && (i+2) % 3 == 0) cout << "." << inp.at(i) << ".";
        else cout << "." << inp.at(i) << ".#";
    }
    cout << endl << ".#.#.";
    for(int i = 1; i < inp.size(); i++) {
        if((i + 1) % 3 == 0) cout << "*.*.";
        else cout << "#.#.";
    }
    cout << endl << "..#..";
    for(int i = 1; i < inp.size(); i++) {
        if((i + 1) % 3 == 0) cout << ".*..";
        else cout << ".#..";
    }

}