#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, e, s, counter = 0, t;
    string look_for, compare_to;
    cin >> n >> e;

    s = pow(2, e);
    look_for = to_string(s);

    for(int i = s; i <= n; i++) {
        compare_to = to_string(i);
        if(compare_to.find(look_for) != string::npos) {
            counter++;
        }
    }
    cout << counter;
}