#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int N, M;
    while(cin >> N >> M && (N != 0 && M != 0)) {
        int n = w
        int records[n];
        int cid, can_sell = 0;
        for(int i = 0; i < N; i++) {
            cin >> cid;
            if(cid != n) records[cid] = 1;
            else last_one = 1;
        }
        for(int i = 0; i < M; i++) {
            cin >> cid;
            if(cid == n && last_one) can_sell++
            if(records[cid] != 0) can_sell++;
        }

        cout << can_sell << endl;
    }
}