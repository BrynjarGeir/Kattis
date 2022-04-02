#include <iostream>
#include <map>
using namespace std;

int main() {
    int R, C, N, r, c;
    map<pair<int, int>, bool> people;
    int neighbors[9];
    cin >> R >> C >> N;

    for(int i = 0; i < N; i++) {
        cin >> r >> c;
        people[{r, c}] = true;
    }

    for(auto p: people) {
        int nghbrs = 0;
        if(people[{p.first-1,p.second-1}]) nghbrs++;
        if(people[{p.first-1,p.second}]) nghbrs++;
        if(people[{p.first-1,p.second+1}]) nghbrs++;
        if(people[{p.first,p.second-1}]) nghbrs++;
        if(people[{p.first,p.second+1}]) nghbrs++;
        if(people[{p.first+1,p.second-1}]) nghbrs++;
        if(people[{p.first+1,p.second}]) nghbrs++;
        if(people[{p.first+1,p.second+1}]) nghbrs++;

        neighbors[nghbrs]++;
    }

    for(int i = 0; i < 9; i++) {
        cout << neighbors[i];
        if(i != 8) cout << " ";
    }

}