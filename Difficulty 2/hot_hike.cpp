#include <iostream>
using namespace std;

int main() {
    int n, d = -1, t_min = 50, c_t_max;
    cin >> n;
    int temps[n];

    for(int i = 0; i < n; i++) {
        cin >> temps[i];
    }

    for(int i = 0; i < n-2; i+= 1) {
        c_t_max = max(temps[i], temps[i+2]);
        if(c_t_max < t_min) {
            d = i;
            t_min = c_t_max;
        }
    }

    cout << d+1 << " " << t_min;
}