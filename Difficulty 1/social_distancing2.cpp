#include <iostream>
using namespace std;

int main() {
    int S, N, s;
    cin >> S >> N;
    bool seats[S] = {false};

    for(int i = 0; i < N; i++) {
        cin >> s;
        seats[s-1] = true;
    }

    int more_people = 0;

    for(int i = 0; i < S; i++) {
        if(seats[i]) continue;
        else if(i == S - 1) {
            if(seats[i-1] || seats[0]) continue;
            more_people++;
            seats[i] = true;
        } else if(i == 0) {
            if(seats[S-1] || seats[1]) continue;
            more_people++;
            seats[i] = true;
        } else {
            if(seats[i-1] || seats[i+1]) continue;
            more_people++;
            seats[i] = true;
        }
    }
    cout << more_people;
}