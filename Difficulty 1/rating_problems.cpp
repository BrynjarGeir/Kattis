#include <iostream>
using namespace std;

int main() {
    double n, k, totalk = 0, number, average, maxAverage, minAverage;

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> number;
        totalk += number;
    }

    average = totalk / n;

    maxAverage = average + (n-k)*3/n;
    minAverage = average - (n-k)*3/n;

    cout << fixed << minAverage << " " << maxAverage;

}