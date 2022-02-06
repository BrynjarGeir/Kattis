#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, a, b;
    set<int> days;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            days.insert(j);
        }
    }

    cout << days.size();    

}