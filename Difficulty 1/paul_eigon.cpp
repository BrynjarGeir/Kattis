#include <iostream>
using namespace std;

int main() {
    int N, P, Q, points;
    cin >> N >> P >> Q;
    points = P + Q;
    
    if ((points / N) % 2 == 0) {
        cout << "paul";
    } else {
        cout << "opponent";
    }

}