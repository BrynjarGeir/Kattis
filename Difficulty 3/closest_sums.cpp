#include <iostream>
#include <algorithm>
using namespace std;

int bs(int seq[], int target, int low, int high, int closest) {
    if(low == high - 1 && abs(target - (seq[low] + seq[high])) < abs(closest - target)) {
        return seq[low] + seq[high];
    } else if(low == high - 1) {
        return closest;
    }
    if(seq[low] + seq[high] == target) return target;
    else if(seq[low] + seq[high] > target) {
        if (abs(target - (seq[low] + seq[high])) < abs(target - closest)) closest = seq[low] + seq[high];
        return bs(seq, target, low, --high, closest);
    }
    else {
        if (abs(target - (seq[low] + seq[high])) < abs(target - closest)) closest = seq[low] + seq[high];
        return bs(seq, target, ++low, high, closest);
    }
}

int main() {
    int n, c = 1;
    while(cin >> n) {
        int ns[n];
        for(int i = 0; i < n; i++) {
            cin >> ns[i];
        }
        sort(ns, ns+n);
        int m;
        cin >> m;
        int ms[m];
        for(int i = 0; i < m; i++) {
            cin >> ms[i];
        }

        cout << "Case " << c++ << ":" << endl;
        for(int i = 0; i < m; i++) {
            int ans = bs(ns, ms[i], 0, n-1, 100000000);
            cout << "Closest sum to " << ms[i] << " is " << ans << endl;
        }
    }
}