#include <iostream>
using namespace std;

int main() {
    string month, date, year, sunrise, sunset;
    int diff_hours, diff_minutes, rise_hours, rise_minutes, set_hours, set_minutes, pos_sunrise, pos_sunset;
    for(int i = 0; i < 1000; i++) {
        cin >> month >> date >> year >> sunrise >> sunset;
        pos_sunrise = sunrise.find(':');
        pos_sunset = sunset.find(':');
        rise_hours = stoi(sunrise.substr(0,pos_sunrise));
        rise_minutes = stoi(sunrise.substr(pos_sunrise+1));
        set_hours = stoi(sunset.substr(0,pos_sunset));
        set_minutes = stoi(sunset.substr(pos_sunset+1));
        if (set_minutes >= rise_minutes) {
            diff_hours = set_hours - rise_hours;
            diff_minutes = set_minutes - rise_minutes;
        } else {
            diff_hours = set_hours - rise_hours -1;
            diff_minutes = 60 - rise_minutes + set_minutes;
        }

        cout << month << " " << date << " " << year << " " << diff_hours << " hours " << diff_minutes << " minutes" << endl;
    }
}