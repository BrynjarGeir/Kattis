#include <iostream>
#include <map>
using namespace std;

int main() {
    string dir_1, dir_2, dir_3;
    int d1, d2, d3;
    map<string, int> directions = {{"South", 0}, {"East", 1}, {"North", 2}, {"West", 3}};

    cin >> dir_1 >> dir_2 >> dir_3;

    d1 = directions[dir_1], d2 = directions[dir_2], d3 = directions[dir_3];

    if ((d1 + 2) % 4 == d2 && (d1 + 1) % 4 == d3) {
        cout << "Yes";
    } else if ((d1 + 3) % 4 == d2 && ((d1 + 1) % 4 == d3 || (d1 + 2) % 4 == d3)) {
        cout << "Yes";
    } else {
        cout << "No";
    }


}