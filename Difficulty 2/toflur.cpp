#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

typedef long long ll;

int main() {
    int N;
    cin >> N;

    ll ans[N];

    for(int i = 0; i < N; i++) {
        cin >> ans[i];
    }

    sort(ans, ans+N);

    ll tot = 0;

    for(int i = 0; i < N-1; i++) {
        tot += pow(ans[i] - ans[i+1], 2);
    }

    cout << tot;
}