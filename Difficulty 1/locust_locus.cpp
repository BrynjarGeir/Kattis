#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int years[k];

    for(int i = 0; i < k; i++) {
        int year, cs, cf, ans = 1;
        cin >> year >> cs >> cf;
        while(ans < cs * cf) {
            if(ans % cs == 0 && ans % cf == 0) break;
            ans++;
        }
        years[i] = year + ans;
    }

    int min_year = INT32_MAX;
    for(int i = 0; i < k; i++) min_year = min(min_year, years[i]);

    cout << min_year;
}