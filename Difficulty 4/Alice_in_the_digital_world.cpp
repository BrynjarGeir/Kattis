#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int ds;
    cin >> ds;

    while(ds--) {
        int n, m, number;
        cin >> n >> m;
        vector<int> numbers, ms;
        for(int i = 0; i < n; i++) {
            cin >> number;
            if(number == m) ms.push_back(i);
            numbers.push_back(number);
        }

        int max_subarray = -1, prev = -1;
        for(int i = 1; i < ms.size() - 1; i++) {
            int curr = accumulate(numbers.begin()+prev+1, numbers.begin()+ms.at(i), 0);
            max_subarray = max(curr, max_subarray);
            prev = ms.at(i-1);
        }
        int first = accumulate(numbers.begin(), numbers.begin() + 1, 0);
        int last = accumulate(numbers.begin() + ms.end()[-2] + 1, numbers.end(), 0);
        max_subarray = max(last, max_subarray);
        max_subarray = max(first, max_subarray);

        cout << max_subarray;
        if(ds != 0) cout << endl;
    }
}