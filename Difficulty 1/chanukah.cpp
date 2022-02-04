#include <iostream>
using namespace std;

int main() {
    int days, sets, set, ans;

    cin >> sets;

    for (int i = 0; i < sets; i++) {
        cin >> set >> days;
        ans = days + days * (days + 1)/2;
        cout << set << " " << ans << endl;
    }
}