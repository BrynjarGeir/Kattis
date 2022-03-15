#include <iostream>
using namespace std;

int main() {
    int N, prev = -1, curr;
    cin >> N;

    while(N--) {
        if(prev = -1) cin >> prev;
        else {
            cin >> curr;
            cout << curr / prev;
            prev = curr / prev;
            if(N != 0) cout << endl;
        }
    }

}