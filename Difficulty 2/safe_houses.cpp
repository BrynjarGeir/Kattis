#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    string line;
    vector<pair<int, int>> houses, spys;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> line;
        int j = 0;
        for(char c: line) {
            if (c == 'S') {
                spys.push_back(make_pair(i, j));
            } else if (c == 'H') {
                houses.push_back(make_pair(i,j));
            }
            j++;
        }
    }
    int max_distance = 0, curr_distance;
    for(pair<int, int> spy: spys) {
        int min_distance = 2 * N;
        for(pair<int, int> house: houses) {
            curr_distance = abs(spy.first - house.first) + abs(spy.second - house.second);
            min_distance = min(min_distance, curr_distance);
        }
        max_distance = max(min_distance, max_distance);

    }
    cout << max_distance;
}