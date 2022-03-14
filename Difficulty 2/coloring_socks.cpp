#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int S, C, K, color;
    cin >> S >> C >> K;
    vector<int> colors;
    for(int i = 0; i < S; i++) {
        cin >> color;
        colors.push_back(color);
    }

    sort(colors.begin(), colors.end());

    int i = 0, j = 1, machines = 1;
    while(j < S) {
        if(colors.at(j) - colors.at(i) <= K && j - i <= C) j++;
        else {
            machines++;
            i = j;
            j++;
        }
    }

    cout << machines;
}