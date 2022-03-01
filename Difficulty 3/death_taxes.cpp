#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string action;
    double x, y, average_cost = 0, profit;
    int shares = 0;


    while(action != "die") {
        cin >> action;
        if (action == "buy") {
            cin >> x >> y;
            average_cost = (average_cost * shares + y * x) / (shares + x);
            shares += x;
        } else if (action == "sell") {
            cin >> x >> y;
            shares -= x;
        } else if (action == "split") {
            cin >> x;
            shares *= x;
            average_cost /= x;
        } else if (action == "merge") {
            cin >> x;
            shares = floor(shares / x);
            average_cost *= x;
        } else {
            cin >> y;
            cout << fixed;
            if(y <= average_cost) cout << y * shares;
            else cout << (y - (y - average_cost) * 0.3) * shares;
        }
    }
}