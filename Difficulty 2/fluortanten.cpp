#include <iostream>
#include <vector>
using namespace std;

int calc_sum(vector<int> numbers) {
    int ans = 0;
    for(int i = 1; i <= numbers.size(); i++) ans += i * numbers.at(i-1);
    return ans;
}


int main() {
    int n, number, pos;
    cin >> n;
    vector<pair<int, int>> numbers;

    for(int i = 0; i < n; i++) {
        cin >> number;
        if(number == 0) pos = i;
        numbers.push_back(number);
    }

    int max_happiness = INT32_MIN, ps = -1;

    for(int i = 1; i < n; i++) max_happiness = max(max_happiness, calc_sum(swap(numbers, i, pos)));

    cout << max_happiness;
}