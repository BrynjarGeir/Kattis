#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, bus;
    cin >> N;
    int busses[N];

    for(int i = 0; i < N; i++) {
        cin >> busses[i];
    }

    sort(busses, busses+N);

    bool same_as_before = false;
    cout << busses[0];
    for(int i = 1; i < N; i++) {
        if(busses[i] == busses[i-1]+1 && same_as_before) continue;
        else if(busses[i] == busses[i-1]+1) {
            cout << "-";
            same_as_before = true;
        } else if(same_as_before){
            cout << busses[i-1] << " " << busses[i] << " ";
        } else {
            cout << busses[i] << " ";
        }
    }
}