#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, total_floors = 0, tallest, smallest, block;
    cin >> n;
    queue<int> blocks;
    int tmp_blocks[n];
    for(int i = 0; i < n; i++) {
        cin >> tmp_blocks[i];
        total_floors += tmp_blocks[i];
    }

    sort(tmp_blocks, tmp_blocks + n);

    for(int i = n-1; i >= 0; i--) {
        blocks.push(tmp_blocks[i]);
    }

    int counter = 0;
    while(blocks.front() - blocks.back() > 1) {
        counter++;
        blocks.pop();
    }
    counter += blocks.front();

    cout << counter;

}