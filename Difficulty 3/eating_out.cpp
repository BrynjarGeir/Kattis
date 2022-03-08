#include <iostream>
using namespace std;

int main() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int min_order = min(a,b), max_order = max(a,b);
    min_order = min(min_order, c), max_order = max(max_order, c);
    if (max_order + min_order <= m) cout << "possible";
    else cout << "impossible";
}