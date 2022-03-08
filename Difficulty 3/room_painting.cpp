#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    long wasted = 0;
    cin >> n >> m;
    int sizes[n], color;

    for(int i = 0; i < n; i++) {
        cin >> sizes[i];
    }
    
    sort(sizes, sizes + n);

    for(int i = 0; i < m; i++) {
        cin >> color;
        for(int j = 0; j < n; j++) {
            if(sizes[j] >= color) {
                wasted += sizes[j] - color;
                break;
            }
        }
    }

    cout << wasted;
}