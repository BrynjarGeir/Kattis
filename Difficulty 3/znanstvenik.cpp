#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int R, C, popped = 0;
    cin >> R >> C;
    vector<string> rows;
    string row;
    for(int i = 0; i < R; i++) {
        cin >> row;
        rows.push_back(row);
    }

    reverse(rows.begin(), rows.end());

    while(rows.sizes() > 1) {
        set<string> columns;
    }

}