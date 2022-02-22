#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, n;
    vector<int> numbers, alones;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> n;
        numbers.push_back(n);
    }

    for(int i = 0; i < N; i++) {
        int pos1 = i % N, pos2 = (i+2) % N;
        int prev = numbers[pos1], curr = numbers[pos2];
        alones.push_back(prev+curr);
    }

    sort(alones.begin(), alones.end());

    cout << alones[0];




}