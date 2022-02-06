#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> knots;
    int size, knot;
    cin >> size;

    for (int i = 0; i < size; i++)  {
        cin >> knot;
        knots.insert(knot);
    }

    for (int i = 0; i < size-1; i++) {
        cin >> knot;
        knots.erase(knot);
    }

    for (int i: knots) {
        cout << i;
    }
}