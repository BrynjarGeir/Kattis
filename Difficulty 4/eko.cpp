#include <iostream>
#include <algorithm>
using namespace std;

int bs(int seq[], int target, int low, int high, int N) {
    if(low >= high) return seq[low];
    int mid = low + (high - low) / 2;
    if(seq[mid] == target) return mid;

}

int cut(int seq[], int height, int N) {
    int wood = 0;
    for(int i = 0; i < N; i++) {
        
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    int heights[N];

    for(int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    sort(heights, heights + N, greater<>());

    int height = heights[0], wood = 0;

    cout << height + 1;

}