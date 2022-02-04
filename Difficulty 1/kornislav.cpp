#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,d;
    vector<int> ans;

    cin >> a >> b >> c >> d;
    ans.push_back(a); ans.push_back(b); ans.push_back(c); ans.push_back(d);
    sort(ans.begin(), ans.end());
    cout << ans[0] * ans[2];

}