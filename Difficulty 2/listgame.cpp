#include <iostream>
#include <math.h>
using namespace std;

int getNumFactors(int a) {
    int ans = 0;

    while(a % 2 == 0) {
        ans++;
        a /= 2;
    }

    for(int i = 3; i <= sqrt(a); i += 2) {
        while(a % i == 0) {
            ans++;
            a /= i;
        }
    }

    if(a > 2) ans++;
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << getNumFactors(n);

}