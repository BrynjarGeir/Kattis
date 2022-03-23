#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int number, n;
    cin >> n;

    while(n--) {
        cin >> number;
        if(numbers.empty() || number > numbers.back()) numbers.push_back(number);
    }

    cout << numbers.size() << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i);
        if(i != numbers.size() - 1) cout << " ";
    }
}