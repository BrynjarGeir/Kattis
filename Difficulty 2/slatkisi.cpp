#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int C, K;
    cin >> C >> K;

    double smallest = pow(10, K);
    int u = ceil((double)C/smallest), l = floor((double)C/smallest);
    int upper = u * smallest, lower = l * smallest;

    if(upper - C <= C - lower) cout << upper;
    else cout << lower;
    
}