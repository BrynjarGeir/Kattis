#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long K;
    cin >> K;

    int numDigits, power = 0;
    long compa = 0;
    while(compa < K) {
        power++;
        compa += pow(2, power);
    }

    int diff = compa - K;

    



}