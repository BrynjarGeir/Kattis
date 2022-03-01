#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int C, P, X, L, A, B;
    map<int, pair<int, vector<int>>> trades;

    cin >> C >> P >> X >> L;
    if(X == L) {
        cout << "leave";
        return 0;
    }

    for(int i = 0; i < P; i++) {
        cin >> A >> B;
        trades[A].first++;
        trades[A].second.push_back(B);
        trades[B].first[++];
        trades[B].second.push_back(A);
    }

    while(C) {
        map<int, pair<int, vector<int>>>::iterator it;
        int leave = L;
        for(it = trades.begin(); )
    }
}