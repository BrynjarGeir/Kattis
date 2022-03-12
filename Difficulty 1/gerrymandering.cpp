#include <iostream>
#include <map>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int P, D, d, va, vb, needed;
    double  wasted_a = 0, wasted_b = 0, total_votes = 0;
    cin >> P >> D;
    
    map<int, pair<int, int>> districts;
    for(int i = 1; i <= D; i++) {
        districts[i] = make_pair(0,0);
    }

    for(int i = 0; i < P; i++) {
        cin >> d >> va >> vb;
        districts[d].first += va;
        districts[d].second += vb;
        total_votes += va + vb;
    }

    for(int i = 1; i <= D; i++) {
        needed = floor((districts[i].first + districts[i].second)/2)+1;
        if(districts[i].first < districts[i].second) {
            cout << 'B' << ' ' << districts[i].first << ' ' << districts[i].second - needed << endl;
            wasted_a += districts[i].first, wasted_b += districts[i].second - needed;
        } else {
            cout << 'A' << ' ' << districts[i].first - needed << ' ' << districts[i].second << endl;
            wasted_a += districts[i].first - needed, wasted_b += districts[i].second;
        }
    }

    cout << setprecision(8) << fixed << abs(wasted_a - wasted_b) / total_votes;
}