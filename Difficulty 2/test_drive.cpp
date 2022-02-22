#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if((a > b && b < c) || (a < b && b > c)) {
        cout << "turned";
    } else if (abs(b-a) < abs(c-b)) {
        cout << "accelerated";
    } else if (abs(b-a) > abs(c-b)) {
        cout << "braked";
    } else {
        cout << "cruised";
    }
}