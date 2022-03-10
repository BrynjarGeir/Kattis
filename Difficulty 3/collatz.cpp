#include <iostream>
#include <set>
using namespace std;

int main() {
    int A, B;
    set<int> first, second;
    cin >> A >> B;

    while(A != 1) {
        if(A % 2 == 0) A /= 2;
        else A = 3 * A + 1;

        first.insert(A);
    }

    while(B != 1) {
        if(B % 2 == 0) B /= 2;
        else B = 3 * B + 1;

        second.insert(B);
    }

    

}