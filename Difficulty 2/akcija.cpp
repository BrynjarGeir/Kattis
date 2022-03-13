#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int prices[N];
    for(int i = 0; i < N; i++) cin >> prices[i];

    sort(prices, prices + N);

    int min_price = 0;
    for(int i = N-1; i >= 2; i -= 3) min_price += prices[i] + prices[i-1];

    for(int i = 0; i < N%3; i++) min_price += prices[i];

    cout << min_price;
}