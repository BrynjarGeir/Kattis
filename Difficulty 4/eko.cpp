#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int heights[N];

    for(int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    sort(heights, heights + N);

    int low = 0, high = N;
    bool been_higher = false, been_lower = false;
    while(low < high) {
        int mid = low + (high - low)/2;
        cout << mid << endl;
        int wood_cut = 0;
        for(int i = 0; i < N; i++) {
            wood_cut += max(0, heights[i] - heights[mid]);
        }
        cout << wood_cut << " " << M << endl;
        if(wood_cut > M && been_lower) break; 
        else if(wood_cut > M) {
            high--;
            been_higher = true;
        } else if(wood_cut < M && been_higher) break;
        else if(wood_cut < M) {
            low++;
            been_lower = true;
        }
        else break;
    }

    cout << low << " " << high;
}