#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, s, f;
    cin >> n;

    map<int, int> intervals;

    for(int i = 0; i < n; i++) {
        cin >> s >> f;
        if (intervals.find(s) == intervals.end()) {
            intervals[s] = f;
        } else {
            if (intervals[s] > f) {
                intervals[s] = f; 
            }
        }
    }

    
}