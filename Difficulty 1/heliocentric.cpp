#include <iostream>
using namespace std;

int main() {
    int earth, mars, days, c = 1;

    while(cin >> earth >> mars) {
        days = 0;
        while(earth != 0 || mars != 0) {
            earth++;
            mars++;
            earth = earth % 365;
            mars = mars % 687;
            days++;
        }
        cout << "Case " << c << ": " << days << endl;
        c++;
    }
}