#include <iostream>
using namespace std;

int main() {
    int n, s, water_left, refills = 0, ounces;
    string order;
    cin >> n >> s;
    water_left = s;

    for(int i = 0; i < n; i++) {
        cin >> order;
        if(order.size() == 1) {
            ounces = stoi(order);
            if(water_left - ounces >= 0) water_left -= ounces;
            else {
                water_left = s - ounces;
                refills++;
            }
        } else {
            ounces = (int)order.at(0) + 1;
            if(water_left - ounces >= 0) water_left -= ounces;
            else {
                water_left = s - ounces;
                refills;
            }
        }
    }

    cout << refills;
}