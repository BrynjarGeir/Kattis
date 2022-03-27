#include <iostream>
#include <vector>
using namespace std;

int main() {
    int C, N, prev_incorrect=-1, curr_incorrect, new_incorrect;
    cin >> C >> N;

    vector<pair<int, int>> correct, incorrect;

    for(int i = 0; i < N; i++) {
        if(prev_incorrect = -1) cin >> prev_incorrect;
        else {
            cin >> new_incorrect;
            if(new_incorrect = curr_incorrect + 1) curr_incorrect = new_incorrect;
            else {
                incorrect.push_back({prev_incorrect, curr_incorrect});
                prev_incorrect = new_incorrect;
                curr_incorrect = new_incorrect;
            }
        }
    }

    
}