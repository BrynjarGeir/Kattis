#include <iostream>
using namespace std;

int main() {
    int N;
    string line;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> line;
        if (line == "P=NP") {
            cout << "skipped" << endl;
        } else {
            int ind = line.find('+');
            cout << stoi(line.substr(0,ind)) + stoi(line.substr(ind+1,line.size())) << endl;
        }
    }
}