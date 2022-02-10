#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a,b,ans = "";
    cin >> a >> b;
    bool keep = false;
    int smaller = min(a.size(), b.size()), curr_a, curr_b, curr_ans;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < smaller; i++) {
        curr_a = (int)a[i];
        curr_b = (int)b[i];
        curr_ans = curr_a + curr_b;
        if (keep) curr_ans++;
        if (curr_ans < 10) {
            keep = false;
            ans += to_string(curr_ans);
        } else {
            keep = true;
            curr_ans %= 10;
            ans += to_string(curr_ans);
        }
    }

    while(keep) {
        
    }

    cout << ans;

}