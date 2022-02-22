#include <iostream>
using namespace std;

int sub_sum(int students[], int N) {
    int max_so_far = -10000000, max_ending_here = 0;
    for(int i = 0; i < N; i++) {
        max_ending_here += students[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    return max_so_far;
} 

int main() {
    int N, P, s;
    cin >> N >> P;

    int students[N];

    for(int i = 0; i < N; i++) {
        cin >> s;
        students[i] = (s - P);
    }

    s = sub_sum(students, N);
    cout << s;


}