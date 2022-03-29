#include <iostream>
#include <map>
#include <sstream>
using namespace std;

string to_lower(string animal) {
    string l_animal = "";
    for(char c: animal) l_animal += tolower(c);
    return l_animal;
}

int main() {
    int n, list = 0;
    string name, animal;
    while(cin >> n && n != 0) {
        cin.ignore();
        map<string, int> animals;
        for(int i = 0; i < n; i++) {
            getline(cin, name);
            istringstream ss(name);
            while(ss >> animal);
            animals[to_lower(animal)]++;
        }
        cout << "List " << ++list << ":" << endl;
        for(auto a: animals) {
            cout << a.first << " | " << a.second << endl;
        }

    }
}