#include <iostream>
#include <math.h>
using namespace std;

string weekday[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
string zellersAlgorithm(int day, int month, int year) {
    int mon;
    if (month > 2) {
        mon = month;
    } else {
        mon = 12 + month;
        year--;
    }
    int y = year % 100;
    int c = year / 100;
    int w = (day + floor((13*(mon+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
    w = w % 7;
    return weekday[w];
}

int main() {
    int day, month;
    cin >> day >> month;

    cout << zellersAlgorithm(day, month, 2009);
}