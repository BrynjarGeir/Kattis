#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int m, n, salary, quota;
    cin >> m >> n;
    string job, description, word;
    map<string, int> salaries;

    for(int i = 0; i < m; i++) {
        cin >> job >> quota;
        salaries[job] = quota;
    }

    for(int i = 0; i < n; i++) {
        salary = 0;
        while(getline(cin, description) && description != ".") {
            istringstream iss(description);
            while(iss >> word) salary += salaries[word];
        }
        cout << salary << endl;
    }
}