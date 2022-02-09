#include <iostream>
using namespace std;

int main() {
    int P, K, p, q, ans;
    string frac;

    cin >> P;

    for(int i = 0; i < P; i++) {
        cin >> K >> frac;
        p = stoi(frac.substr(0,frac.find('/')));
        q = stoi(frac.substr(frac.find('/')+1));
        ans = 0.5 * (p + q - 1) * (p + q - 2) + q;
        cout << K << " " << ans << endl;
    }
}