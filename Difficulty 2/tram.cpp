#include <iostream>
using namespace std;

int main() {
    int N;
    double x = 0, y = 0, xi, yi;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> xi >> yi;
        x += xi, y += yi;
    }
    cout << (y-x)/N;
}