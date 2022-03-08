#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double B, Br, Bs, A, Ar, As;
    cin >> B >> Br >> Bs >> A >> As;
    
    Ar = (Br - B) * (Bs / As) + A;
    if(ceil(Ar) == Ar) cout << ceil(Ar) + 1;
    else cout << ceil(Ar);
    
}