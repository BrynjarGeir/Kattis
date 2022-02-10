#include <iostream>
using namespace std;

int main() {
    double a1, b1, a2, b2, avg_gunnar, avg_emma;

    cin >> a1 >> b1 >> a2 >> b2;

    avg_gunnar = (a1+b1) / 2.0 + (a2+b2) / 2.0;
    
    cin >> a1 >> b1 >> a2 >> b2;

    avg_emma = (a1+b1) / 2.0 + (a2+b2) / 2.0;

    if (avg_emma < avg_gunnar) {
        cout << "Gunnar";
    } else if(avg_emma > avg_gunnar) {
        cout << "Emma";
    } else {
        cout << "Tie";
    }
}