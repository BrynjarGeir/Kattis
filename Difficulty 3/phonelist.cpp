#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool comp(string a, string b) {
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<string> numbers;
        string number;
        while(n--) {
            cin >> number;
            numbers.push_back(number);
        }

        sort(numbers.begin(), numbers.end());
        bool yn = true;

        for(int i = 1; i < numbers.size(); i++) {
            string prev = numbers.at(i-1);
            string curr = numbers.at(i);
            if(prev.size() > curr.size()) continue;
            else if(prev.compare(curr.substr(0, prev.size())) == 0) {yn = false; break;}
        }
        
        if(yn) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
}