#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        vector<string> numbers;
        string number;
        cin >> n;
        while(n--) {
            cin >> number;
            numbers.push_back(number);
        }
        sort(numbers.begin(), numbers.end());
        
    }
}