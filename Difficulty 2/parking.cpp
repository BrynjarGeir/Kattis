#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool in_range(int i, int a, int d) {
    if(i >= a && i < d) return true;
    return false;
}

int main() {
    int A, B, C, a1, d1, a2, d2, a3, d3;
    cin >> A >> B >> C >> a1 >> d1 >> a2 >> d2 >> a3 >> d3;

    int min_park = min(a1, a2), max_park = max(d1, d2);
    min_park = min(min_park, a3), max_park = max(max_park, d3);

    int total_cost = 0;

    for(int i = min_park; i < max_park; i++) {
        bool f = in_range(i, a1, d1), s = in_range(i, a2, d2), t = in_range(i, a3, d3);
        if(f && s && t) total_cost += 3 * C;
        else if((f && s) || (s && t) || (f && t)) total_cost += 2 * B;
        else if(f || s || t) total_cost += A;
    }

    cout << total_cost;
}