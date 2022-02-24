#include <iostream>
#include <set>
using namespace std;

int main() {
    int G, MAX_SIN = 1000000;

    cin >> G;
    if (G == 1) {
        cout << 1;
        return 0;
    }

    int nums[G];

    for(int i = 0; i < G; i++) {
        cin >> nums[i];
    }

    int j = 2;
    while (j < MAX_SIN) {
        set<int> distinct;
        bool found = true;
        for(int i = 0; i < G; i++) {
            if (distinct.find(nums[i] % j) != distinct.end()) {
                found = false;
                break;
            }
            distinct.insert(nums[i] % j);
        }
        if (found) {
            cout << j;
            return 0;
        } else j++;
    }
}