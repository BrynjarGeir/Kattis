#include <iostream>
using namespace std;

int main() {
    int n, dm, d, years = -1;  
    cin >> n >> dm;

    for(int i = 0; i < n; i++) {
        cin >> d;
        if(d <= dm) {
            years = i;
            break;
        }
    }

    if(years == -1) {
        cout << "It had never snowed this early!";
    } else {
        cout << "It hadn't snowed this early in " << years << " years!";
    }
}