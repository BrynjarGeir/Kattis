#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string time;
    cin >> time;
    int hour_tens, hour_ones, minute_tens, minute_ones;
    hour_tens = stoi(time.substr(0,1)), hour_ones = stoi(time.substr(1,1));
    minute_tens = stoi(time.substr(2,1)), minute_ones = stoi(time.substr(3));
    
    for(int i = 3; i >= 0; i--) {
        int current = pow(2,i);
        if(hour_tens >= current) {
            cout << "*";
            hour_tens -= current;
        } else {
            cout << ".";
        }
        cout << " ";
        if(hour_ones  >= current) {
            cout << "*";
            hour_ones -= current;
        } else {
            cout << ".";
        }
        cout << "   ";
        if(minute_tens >= current) {
            cout << "*";
            minute_tens -= current;
        } else {
            cout << ".";
        }
        cout << " ";
        if(minute_ones >= current) {
            cout << "*";
            minute_ones -= current;
        } else {
            cout << ".";
        }
        cout << endl;
    }
}