#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long N, K;

    cin >> N >> K;

    if (K >= log2(N)) cout << "Your wish is granted!";
    else cout << "You will become a flying monkey!";
}