#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, t;
    cin >> N >> t;
    int A[N];

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A+N);

    if (t == 1) {
        int h = N-1, l = 0;
        bool f = false;
        while(h >= l) {
            if (A[l] + A[h] == 7777) {
                f = true;
                break;
            } else if(A[l] + A[h] > 7777) {
                h--;
            } else l++;
        }
        if (f) cout << "Yes";
        else cout << "No";
    } else if(t == 2) {
        bool uniq = true;
        for(int i = 0; i < N-1; i++) {
            if (A[i] == A[i+1]) {
                uniq = false;
                break;
            }
        }
        if(uniq) cout << "Unique";
        else cout << "Contains duplicate";
    } else if(t == 3) {
        int often = N/2, max_count = 1, that_int, count = 1;
        for(int i = 0; i < N; i++) {
            if (A[i] == A[i+1]) {
                count++;
            } else {
                if (max_count < count) {
                    that_int = A[i];
                    max_count = count;
                }
                count = 1;
            }
        }
        max_count = max(max_count, count);
        if(max_count > often) cout << that_int;
        else cout << -1;
    } else if(t == 4) {
        if (N % 2 != 0) {
            cout << A[N/2];
        } else cout << A[N/2 - 1] << " " << A[N/2];
    } else if(t == 5) {
        for(int i = 0; i < N; i++) {
            if (A[i] >= 100 && A[i] <= 999) {
                cout << A[i] << " ";
            }
        }
    }
}