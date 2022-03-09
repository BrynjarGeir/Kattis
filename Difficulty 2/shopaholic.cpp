#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prices[n];

    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices, prices + n, greater <>());

    long discount = 0;
    for(int i = 2; i < n; i += 3) {
        discount += prices[i];
    }

    cout << discount;
}