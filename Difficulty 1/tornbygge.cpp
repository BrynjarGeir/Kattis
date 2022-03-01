#include <iostream>
using namespace std;

int main() {
    int N, towers = 1, prev = -1, curr;
    cin >> N;

    for(int i = 0; i < N; i++) {
        if(prev == -1) cin >> prev;
        else {
            cin >> curr;
            if (curr > prev) towers++;
            prev = curr;
        }
    }

    cout << towers;
}