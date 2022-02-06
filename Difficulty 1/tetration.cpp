#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double n;
    cin >> n;

    cout << fixed << pow(M_E, log(n)/n);
}