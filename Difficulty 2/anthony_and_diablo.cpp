#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A, N;
    cin >> A >> N;

    bool ans = (2 * sqrt(A*M_PI) <= N);
    if (!ans) {
        cout << "Need more materials!";
    } else {
        cout << "Diablo is happy!";
    }    
}