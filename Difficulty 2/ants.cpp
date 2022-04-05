#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int l, n, ant;
        cin >> l >> n;
        int max_distance = -1, min_distance = l;
        for(int i = 0; i < n; i++) {
            cin >> ant;
            int curr_dist = min(ant, l - ant);
            max_distance = max(max_distance, curr_dist);
            min_distance = min(min_distance, curr_dist);
        }
        cout << max_distance << " " << l - min_distance << endl;
    }
}