#include <iostream>
using namespace std;

int sumDigits(int N) {
    int ans = 0;
    while(N) {
        ans += N % 10;
        N /= 10;
    }
    return ans;
}

int main() {
    int T, N;
    cin >> T;

    while(T--) {
        cin >> N;
        int target = sumDigits(N);
        //cout << target << " " << N << endl;
        for(int i = N -1; i >= 0; i--) {
            if(target == sumDigits(i)+1) {
                cout << i << endl;
                break;
            }
        }
    }


}