#include <iostream>
#include <string>
using namespace std;

int main() {
    int available = 0; int eachMonth = 0; 
    int months = 0; int thisMonth = 0;

    cin >> eachMonth;
    cin >> months;

    for (int i = 0; i < months; i++) {
        cin >> thisMonth;

        available += eachMonth - thisMonth;
    }
    
    cout << available + eachMonth;
}