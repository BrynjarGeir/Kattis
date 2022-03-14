#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double per;
    cin >> per;
    double above = 1 / (0.01*per), below = 1 / (1 - 0.01*per);
    cout << fixed << setprecision(4) << above << endl << below;
}