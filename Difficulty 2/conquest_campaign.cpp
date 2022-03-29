#include <iostream>
#include <set>
using namespace std;

int main() {
    int R, C, N, x, y;
    cin >> R >> C >> N;

    set<pair<int, int>> occupied;

    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        occupied.insert({x,y});
    }
    int days = 1;
    while(occupied.size() < R * C) {
        for(auto p: occupied) {
            if(p.first > 0 && p.second > 0) occupied.insert({p.first-1, p.second-1});
            if(p.first > 0 && p.second < C-1) occupied.insert({p.first-1, p.second+1});
            if(p.first < R-1 && p.second > 0) occupied.insert({p.first+1, p.second-1});
            if(p.first < R-1 && p.second < C-1) occupied.insert({p.first+1, p.second+1});
        }
        days++;
    }

    cout << days;

    
}