#include <iostream>
#include <random>
using namespace std;

int main() {
    int number = 1;
    while(number < 99) {
        cout << number << endl;
        cin >> number;
        if(number % 3 == 1) number += 2;
        else if(number % 3 == 2) number += 1;
        else number += rand() % 2 + 1;
    }
    cout << number;
    return 0;
}