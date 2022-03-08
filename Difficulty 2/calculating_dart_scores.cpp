#include <iostream>
#include <set>
using namespace std;

int main() {
    int goal;
    set<int> impossible = {1, 2, 163, 166, 169, 172, 173, 175, 176, 178, 179}
    cin >> goal;
    if (impossible.find(goal) != impossible.end()) cout << "impossible";
}