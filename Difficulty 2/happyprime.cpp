#include <iostream>
#include <map>
#include <math.h>
using namespace std;

bool isPrime(int m) {
    if(m == 1) return false;
    for(int i = 2; i <= sqrt(m)+1; i++) {
        if(m % i == 0) return false;
    }
    return true;
}

bool isHappy(int m) {
    while(m != 1 && m != 4) {
        int new_num = 0;
        while (m > 0)
        {
            int rem = m % 10;
            new_num += rem * rem;
            m /= 10;
        }
        m = new_num;
    }
    if(m == 1) return true;
    return false;
}

int main() {
    int P;
    cin >> P;

    while(P--) {
        int K, m;
        cin >> K >> m;
        cout << K << " " << m << " ";
        if(isHappy(m) && isPrime(m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}