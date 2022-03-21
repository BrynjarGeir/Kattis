#include <iostream>
using namespace std;

int main() {
    int n, k, number;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> number;
        if(i % k == 0) cout << number << ' ';
    }
}