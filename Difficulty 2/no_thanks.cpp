#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k, prev = -1, ans = 0;
    vector<int> points;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k;
        points.push_back(k);
    }

    sort(points.begin(), points.end());

    for(int i: points) {
        if(prev == -1) {
            prev = i;
            ans += prev;
        } else {
            if (prev != i - 1) {
                ans += i;
            }
            prev = i;
        }
    }

    cout << ans;
    
}