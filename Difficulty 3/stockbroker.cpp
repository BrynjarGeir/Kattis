#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, p, cash = 100, stocks = 0;
    cin >> d;
    int prices[d];

    for(int i = 0; i < d; i++) {
        cin >> prices[d];
    }

    for(int i = 0; i < d; i++) {
        int max_left = *max_element(prices+i, prices+d);
        cout << max_left << endl;
    }

}