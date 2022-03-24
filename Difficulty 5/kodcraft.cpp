#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int contests[N], division = 1, already_occurred = 0, pos = 0;

    for(int i = 0; i < N; i++) cin >> contests[i];

    bool first = true;

    while(division != K) {
        if(contests[pos] == division) {
            if(first) {
                first = false;
                already_occurred = 1;
            }
            division++;
        }
        pos++;
        already_occurred++;
        pos %= N;
    }

    while(contests[pos] != K) {
        already_occurred++;
        pos++;
        pos %= N;
    }

    cout << already_occurred;
}