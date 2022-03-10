#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string X, Y;
    cin >> X;

    Y = X;
    next_permutation(Y.begin(), Y.end());

    if(Y <= X) {
        cout << "0";
    } else {
        cout << Y;
    }
}