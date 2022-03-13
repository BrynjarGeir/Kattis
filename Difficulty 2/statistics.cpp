#include <iostream>
using namespace std;

int main() {
    int n, max_X, min_X, current, m = 10, i = 1;
    while(m-- && cin >> n) {
        max_X = -1000000, min_X = 1000000;
        for(int j = 0; j < n; j++) {
            cin>> current;
            max_X = max(current, max_X);
            min_X = min(current, min_X);
        }

        cout << "Case " << i << ": " << min_X << " " << max_X << " " << max_X - min_X << endl;
        i++;
    }
}