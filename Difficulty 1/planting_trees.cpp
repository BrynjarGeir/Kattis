#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> days(n);

    for(int i = 0; i < n; i++) {
        cin >> days[i];
    }

    sort(days.begin(), days.end());

    int longest = days[0], ans = 1;

    for(int i = 1; i < n; i++) {
        longest--, ans++;
        if(longest < days[i]) {
            longest = days[i];
        }
    }

    ans += longest;

    cout << ans + 1;
}