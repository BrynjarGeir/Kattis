#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, curr;
    vector<pair<int, int>> line;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        cin >> curr;
        line.push_back(make_pair(curr, i));
    }

    sort(line.begin(),line.end());

    cout << "1 ";
    for (const pair<int, int> l: line) {
        cout << l.second << " ";
    }
}