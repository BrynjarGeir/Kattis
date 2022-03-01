#include <iostream>
using namespace std;

int main() {
    int n, volume = 7;
    string order, N;
    getline(cin, N);
    n = stoi(N);

    while(n--) {
        getline(cin, order);
        if(order == "Skru op!" && volume < 10) volume++;
        else if(order == "Skru ned!" && volume > 0) volume--;
    }

    cout << volume;
}