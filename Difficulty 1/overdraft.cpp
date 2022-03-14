#include <iostream>
using namespace std;

int main() {
    int min_balance = 0, n, balance = 0, transaction;
    cin >> n;

    while(n--) {
        cin >> transaction;
        balance += transaction;
        min_balance = min(min_balance, balance);
    }

    cout << -min_balance;
}