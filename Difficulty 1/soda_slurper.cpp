#include <iostream>
using namespace std;

int main() {
    int e,f,c;
    cin >> e >> f >> c;
    int bottles = e + f;
    int drinkable = 0, total = 0;
    int remainder;

    while (bottles >= c) {
        remainder = bottles % c;
        drinkable = bottles / c;
        total += drinkable;
        bottles = drinkable + remainder;
    }

    cout << total;
}