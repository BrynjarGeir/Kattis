#include <iostream>
using namespace std;


int main() {
    int P, K, b, n, ans;
    string A;

    cin >> P;

    for (int i = 0; i < P; i++) {
        cin >> K >> b >> n;
        ans = 0;
        while (n > 0) {
            ans += (n % b) * (n % b);
            n /= b;
        }
        cout << K << " " << ans << endl;
    }


}