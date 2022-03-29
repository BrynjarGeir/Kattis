#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, color;
    cin >> N >> K;
    vector<int> seen(K+1, 0);

    for(int i = 0; i < N; i++) {
        cin >> color;
        seen[color]++;
    }

    int min_seen = INT32_MAX;
    for(int i = 1; i < seen.size(); i++) min_seen = min(min_seen, seen.at(i));
    vector<int> least;
    for(int i = 1; i < seen.size(); i++) if(seen.at(i) == min_seen) least.push_back(i);
    cout << least.size() << endl;
    for(int i: least) cout << i << " ";
}