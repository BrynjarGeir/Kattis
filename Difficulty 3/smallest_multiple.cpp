#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long multiple;
    int number;
    string line;
    while (getline(cin, line)) {
        vector<int> numbers;
        multiple = 1;
        while(!line.empty()) {
            number = stoi(line.substr(0,line.find(' ')));
            if(line.find(' ') != string::npos) line = line.substr(line.find(' ')+1);
            else line = "";
            numbers.push_back(number);
        }
        sort(numbers.begin(), numbers.end());
        for(int i = numbers.size()-1; i >= 0; i--) {
            multiple *= numbers[i];
            bool done = true;
            for(int j = 0; j < i; j++) {
                if(multiple % numbers[j] != 0) {
                    done = false;
                    break;
                }
            }
            if(done) {
                cout << multiple << endl;
                break;
            }
        }
    }
    
}