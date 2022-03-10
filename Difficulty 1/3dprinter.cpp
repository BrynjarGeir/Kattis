#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    n = ceil(log2(n)) + 1;
    cout << n;
}