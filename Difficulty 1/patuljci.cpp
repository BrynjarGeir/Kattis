#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int hats[9], sum = 0, pos = -1;
    map<int, int> dwarves;
    for(int i = 0; i < 9; i++) {
        cin >> hats[i];
        dwarves[hats[i]] = i;
    }

    sort(hats, hats + 9);
 }