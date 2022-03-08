#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, L, U;
    cin >> N;
    vector<pair<int, int>> intervals;
    while(N--) {
        cin >> L >> U;
        intervals.push_back(make_pair(L, U));
    }

    sort(intervals.begin(), intervals.end());

    while(true) {
        bool change = false;
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i].first <= intervals[i-1].second) {
                pair<int, int> np = make_pair(intervals[i].first, intervals[i-1].second);
                intervals[i-1] = np;
                intervals.erase(intervals.begin() + i);
                change = true;
                break;
            }
        }
        if(!change) break;
    }
    cout << intervals.size();
}