#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int N = 0; string first; string second; string line;
    double amount = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> line;

        first = line.substr(0, line.length() - 1);
        second = line.back();

        double n = stod(first);
        double p = stod(second);

        amount  += pow(n, p);
    }
    int ans = (int)amount;
    cout << ans;

}