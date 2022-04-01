#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while(n) {
        if(n % 10 == 0) ans += 10;
        else ans += n % 10;
        n /= 10;
    }

    cout << ans;
}