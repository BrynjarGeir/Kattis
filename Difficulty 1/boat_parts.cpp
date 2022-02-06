#include <iostream>
#include <set>
using namespace std;

int main() {
    int P, N, days = 0;
    set<string> parts;
    string part;
    cin >> P >> N;

    for (int i = 0; i < N; i++) {
        cin >> part;
        parts.insert(part);
        days++;
        if (parts.size() == P) {
            cout << days;
            return 0;
        }
    }

    cout << "paradox avoided";

}