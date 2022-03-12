#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string original[n], co[n];

    for(int i = 0; i < n; i++) {
        cin >> original[i];
        co[i] = original[i];
    }

    sort(co, co+n);

    bool decreasing = true, increasing = true;

    for(int i = 0; i < n; i++) {
        if(co[i] != original[i]) increasing = false;
        if(co[n-i-1] != original[i]) decreasing = false;
        if(!increasing && !decreasing) break;
    }

    if(increasing) cout << "INCREASING";
    else if(decreasing) cout << "DECREASING";
    else cout << "NEITHER";
}