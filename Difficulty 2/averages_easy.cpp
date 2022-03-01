#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int tests, ncs, ne, counter;
    double iqcs, iqe, curr_iq, avg_cs, avg_e;

    cin >> tests;
    for(int i = 0; i < tests; i++) {
        cin >> ncs >> ne;
        vector<double> iq_cs;
        iqcs = 0;
        for(int j = 0; j < ncs; j++) {
            cin >> curr_iq;
            iqcs += curr_iq;
            iq_cs.push_back(curr_iq);
        }
        avg_cs = iqcs / ncs;
        iqe = 0;
        for(int j = 0; j < ne; j++) {
            cin >> curr_iq;
            iqe += curr_iq;
        }
        avg_e = iqe / ne;
        counter = 0;
        for(int cs: iq_cs) {
            if(cs < avg_cs && cs > avg_e) {
                counter++;
            }
        }
        cout << counter << endl;
    }
}