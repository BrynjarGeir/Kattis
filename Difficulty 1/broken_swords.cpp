#include <iostream>
using namespace std;

int main() {
    int N, unbroken[2] = {0,0};
    cin >> N;
    string slat;

    for(int i = 0; i < N; i++) {
        cin >> slat;
        if(slat[0] == '0') unbroken[0]++;
        if(slat[1] == '0') unbroken[0]++;
        if(slat[2] == '0') unbroken[1]++;
        if(slat[3] == '0') unbroken[1]++;
    }
    int min_unbroken = min(unbroken[0], unbroken[1]);

    unbroken[0] -= min_unbroken, unbroken[1] -= min_unbroken;

    cout << min_unbroken << " " << unbroken[0] << " " << unbroken[1];
}