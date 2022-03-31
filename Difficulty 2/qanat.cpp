#include <iostream>
using namespace std;

int main() {
    double w, h, n;
    cin >> w >> h >> n;
    double x = w / (n+1);
    double total_cost = 0, slope = h / w;

    for(int i = 1; i <= n+1; i++) {
        double xi = x*i;
        double l = slope * xi;
        total_cost += 0.5 * l * l;
        cout << total_cost << endl;
    }

    cout << total_cost;
}