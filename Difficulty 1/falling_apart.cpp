#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, number, alice = 0, bob = 0;
    bool alice_turn = true;
    cin >> a;
    vector<int> numbers;
    for (int i = 0; i < a; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    while (!numbers.empty()) {
        if(alice_turn) {
            alice += numbers.back();
            numbers.pop_back();
            alice_turn = !alice_turn;
        } else {
            bob += numbers.back();
            numbers.pop_back();
            alice_turn = !alice_turn;
        }
    }

    cout << alice << " " << bob;

}