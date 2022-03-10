#include <iostream>
using namespace std;

int main() {
    int number = 1;
    while(number != 99) {
        cout << number << endl;
        cin >> number;
        number += min(3 - number%3, 2);
    }
}