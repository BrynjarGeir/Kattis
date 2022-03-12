#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int days[n];

    for(int i = 0; i < n; i++) {
        cin >> days[i];
    }

    sort(days, days+n);
    int day = 0;
    for(int i = n-1; i >= 0; i--) {
        days[i] -= i;
        day++;
    }

    bool some_none_zero = true;

    cout << day;


}