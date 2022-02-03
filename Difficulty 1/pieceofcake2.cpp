#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    b = max(a-b, b);
    c = max(a-c, c);
    
    cout << b*c*4;
}