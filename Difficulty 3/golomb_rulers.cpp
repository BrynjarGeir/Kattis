#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string line, number;
    int current;

    while(getline(cin, line)) {
        vector<int> numbers;
        number = "";
        for(char c: line) {
            if(c == ' ') {
                numbers.push_back(stoi(number));
                number = "";
            } else {
                number += c;
            }
        }
        numbers.push_back(stoi(number));
        sort(numbers.begin(), numbers.end());
        set<int> seen;
        bool already = false;
        for(int i = 0; i < numbers.size()-1; i++) {
            for(int j = i+1; j < numbers.size(); j++) {
                if(seen.find(numbers[j]-numbers[i]) != seen.end()) {
                    already = true;
                    break;
                } else {
                    seen.insert(numbers[j] - numbers[i]);
                }
            }
            if(already) break;
        }
        if(already) cout << "not a ruler" << endl;
        else if(numbers.back() == seen.size()) cout << "perfect" << endl;
        else {
            cout << "missing ";
            for(int i = 1; i <= numbers.back(); i++) {
                if(seen.find(i) == seen.end()) cout << i << " ";
            }
            cout << endl;
        }
    }

}