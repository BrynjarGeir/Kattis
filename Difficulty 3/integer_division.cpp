#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    int n;
    long long d, num;
    map<long long, long long> mapping;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        mapping[num / d]++;
    }

    long long ans = 0;
    for(auto i: mapping) {
        long long t = i.second;
        ans += t * (t-1) / 2;
    }

    cout << ans;


}