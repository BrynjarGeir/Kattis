#include <iostream>
#include <math.h>
using namespace std;

int series(int M, int N) {
    int ans = 1;
    N -= 2;
    while (N > -1) {
        ans += pow(M, N);
        N--;
    }
    return ans;
}

int main() {
    int N, M;
    cin >> N >> M;
    if(!M) cout << pow(2, N);
    else {
        
    }
    int ans = pow(2, N) -  series(M, N);
    cout << ans;
}