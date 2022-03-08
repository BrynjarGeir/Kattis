#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char animal, animals[n];

    for(int i = 0; i < n; i++) {
        cin >> animals[i];
    }

    int bells = 0;
    while(true) {
        bool no_ocelot = true;
        int lowest_ocelot;
        for(int i = n-1; i >= 0; i--) {
            if(animals[i] == 'O') {
                no_ocelot = false;
                lowest_ocelot = i;
                animals[i] == 'Z';
                break;
            }
        }
        if(no_ocelot) break;
        for(int i = n - 1; i > lowest_ocelot; i--) {
            animals[i] = 'O';
        }
        bells++;
    }

    cout << bells;
}