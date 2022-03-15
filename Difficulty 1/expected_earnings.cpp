#include <iostream>
using namespace std;

int main() {
    double n, k, p;
    cin >> n >> k >> p;
    if(n*p >= k) cout << "spela inte!";
    else cout << "spela";
}