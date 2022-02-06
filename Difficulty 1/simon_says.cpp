#include <iostream>
using namespace std;

int main() {
    int n;
    string line, N;
    string command = "Simon says";
    getline(cin, N);
    n = stoi(N);

    for (int i = 0; i < n; i++) {
        getline(cin, line);
        if (line.find(command) == 0) {
            cout << line.substr(11) << endl;
        }
    }
}