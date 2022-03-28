#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A, B;

    cin >> N >> A;
    N--;
    while(N--) {
        cin >> B;
        int g = __gcd(A, B);
        int a = A / g;
        B /= g;
        cout << a << '/' << B << endl;
    }
    
}