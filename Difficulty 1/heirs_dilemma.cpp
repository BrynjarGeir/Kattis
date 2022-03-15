#include <iostream>
#include <set>
using namespace std;

int main() {
    int L, H, count = 0;
    cin >> L >> H;

    for(int i = L; i <= H; i++) {
        int j = i;
        bool divisble = true;
        set<int> seen;
        while(j) {
            int curr = j % 10;
            if(i % curr != 0 || seen.find(curr) != seen.end()) {
                divisble = false;
                break;
            }
            seen.insert(curr);
            j /= 10;
        }
        if(divisble) count++;
    }

    cout << count;
}