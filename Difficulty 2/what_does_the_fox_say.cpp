#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while(T--) {
        map<string, bool> not_fox;
        string animal_noises, line;
        getline(cin, animal_noises);

        while(getline(cin, line) && line != "what does the fox say?") {
            string noise;
            int pos = line.find("goes");
            pos += 5;
            noise = line.substr(pos);
            while()
        } 
    }
}