#include <iostream>
using namespace std;

bool binarysearch(long long seq[], int target, int l, int r) {
    if(l > r) return false;
    int m = (l+r) / 2;
    if(seq[m] == target) return true;
    else if(seq[m] < target) return binarysearch(seq, target, m+1, r);
    else return binarysearch(seq, target, l, m-1);
}

int main() {
    int n, m, a, c, x0, target, found, l, r, mid;
    cin >> n >> m >> a >> c >> x0;
    long long numbers[n];

    for(int i = 0; i < n; i++) {
        numbers[i] = (a * x0 + c) % m;
        x0 = numbers[i];
    }

    found = 0;
    for(int i = 0; i < n; i++) {
        if(binarysearch(numbers, numbers[i], 0, n-1)) {
            found++;
        }
    }

    cout << found;

}