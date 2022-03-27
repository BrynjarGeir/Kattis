#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(9);
    map<string, double> to_thou = {{"th",1}, {"thou",1}, {"in",1000}, {"inch", 1000}, {"ft", 12000}, {"foot", 12000}, {"yd", 36000}, {"yard", 36000}, {"ch", 792000}, {"chain", 792000}, {"fur", 7920000}, {"furlong", 7920000}, {"mi", 63360000}, {"mile", 63360000}, {"lea", 190080000}, {"league", 190080000}};
    int unit;
    string from, in, to;
    cin >> unit >> from >> in >> to;
    double conversion = to_thou[from]/to_thou[to];
    cout << unit * conversion;

}