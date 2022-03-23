#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, dec_number, power;
    string bab_number, e;
    cin >> N;
    cin.ignore();

    while(N--) {
        getline(cin, bab_number);
        e = "", power = 0, dec_number = 0;
        for(int i = bab_number.size() - 1; i >= 0; i--) {
            if(bab_number.at(i) == ',') {
                if(e != "") dec_number += stoi(e) * pow(60, power);
                power++;
                e = "";
            } else {
                e = bab_number.at(i) + e;
            }
        }

        cout << dec_number + stoi(e) * pow(60, power);
        if(N != 0) cout << endl;
    }
}