#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> votes;
    string candidate;

    while(getline(cin, candidate) && candidate != "***") votes[candidate]++;

    int max_votes = -1;
    string winning_candidate;
    bool runoff = false;

    for(auto v: votes) {
        if(v.second > max_votes) {
            max_votes = v.second;
            winning_candidate = v.first;
        }
    }

    for(auto v: votes) {
        if(v.second == max_votes && winning_candidate != v.first) {
            runoff = true;
            break;
        }
    }

    if(runoff) cout << "Runoff!";
    else cout << winning_candidate;
}