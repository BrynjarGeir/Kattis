#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int prev, curr, notZanzi;
    string line, tests;

    getline(cin,tests);

    int n = stoi(tests);

    for(int i = 0; i < n; i++) {
        notZanzi = 0;
        prev = 1;
        curr = 1;
        getline(cin, line);
        stringstream ss(line);
        vector<int> numbers;

        for (int i = 0; ss >> i;) {
            numbers.push_back(i);
        }

        for (int number: numbers) {
            curr = number;
            notZanzi += max(0, curr - 2*prev);
            prev = curr;
        }
        cout << notZanzi << endl;
    }
}