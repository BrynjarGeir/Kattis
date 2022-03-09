#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int ships[n];

    for(int i = 0; i < n; i++) {
        cin >> ships[i];
    }

    sort(ships, ships + n);

    int systems_won = 0, pos = 0;
    while(a > 0 && pos < n) {
        if(ships[pos] < a) {
            systems_won++;
            a -= ships[pos] + 1;
        } else {
            break;
        }
        pos++;
    }

    cout << systems_won;

}