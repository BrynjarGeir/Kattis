#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    double d, x, y;
    int N;

    while(cin >> d >> N && (d != 0 && N != 0)) {
        vector<pair<double, double>> locations;
        for(int i = 0; i < N; i++) {
            cin >> x >> y;
            locations.push_back({x, y});
        }

        int sweet = 0, sour = 0;
        for(int i = 0; i < N; i++) {
            bool sw = true;
            for(int j = 0; j < N; j++) {
                if(i == j) continue;
                double dist2 = pow(locations.at(i).first - locations.at(j).first, 2) + pow(locations.at(i).second - locations.at(j).second, 2);
                double dist = sqrt(dist2);
                if(dist <= d) {sw = false; break;}
            }
            if(sw) sweet++;
            else sour++;
        }
        cout << sour << " sour, " << sweet << " sweet" << endl;
    }
}