#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(0);
    int n, i; 
    double x, y;
    cin >> n >> x >> y;

    while(n--) {
        cin >> i;
        cout << i * (y/x) << endl;
    }


}