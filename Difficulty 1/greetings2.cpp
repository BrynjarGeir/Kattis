#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string hey;

    cin >> hey;

    int ne = count(hey.begin(), hey.end(), 'e');

    string ans = "h";

    for (int i = 0; i < 2*ne; i++) {
        ans = ans + "e";
    }

    ans = ans + "y";

    cout << ans;

}