#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    double qaly = 0;
    double q, d;

    for(int i = 0; i < N; i++) {
        cin >> q >> d;

        qaly += q * d; 
    }

    cout << fixed << qaly;

}

