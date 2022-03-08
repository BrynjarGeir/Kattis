#include <iostream>
using namespace std;

int main() {
    int n, k, w;
    cin >> n;
    while(n--) {
        cin >> k >> w;
        string prev = "", next;
        int count = 0;
        for(int i = 0; i < w; i++) {
            if(prev == "") {
                cin >> prev;
                count += prev.size();
            } else {
                cin >> next;
                count += next.size();
            }
        }

    }
}