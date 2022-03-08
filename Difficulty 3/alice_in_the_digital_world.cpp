#include <iostream>
#include <numeric>
using namespace std;

int find_next_m(int curr_m, int numbers[], int m, int n) {
    for(int i = curr_m+1; i < n; i++) {
        if(numbers[i] == m) return i;
    }
    return n;
}

int main() {
    int ds, n, m;
    cin >> ds;

    while(ds--) {
        cin >> n >> m;
        int numbers[n];
        for(int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
        int prev_m = -1, curr_m = -1, next_m, max_sum = -1;
        next_m = find_next_m(curr_m, numbers, m, n);
        while (next_m != n)
        {
            int curr_sum = accumulate(numbers+prev_m+1, numbers + next_m, 0);
            max_sum = max(max_sum, curr_sum);
            prev_m = curr_m;
            curr_m = next_m;
        }
        cout << max_sum << endl;
        
    }
}