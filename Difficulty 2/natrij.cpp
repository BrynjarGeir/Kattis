#include <iostream>
using namespace std;

int main() {
    int hour_1, hour_2, minute_1, minute_2, second_1, second_2;
    int diff_hour, diff_minute, diff_second;
    string time_1, time_2;

    cin >> time_1 >> time_2;

    hour_1 = stoi(time_1.substr(0,2)), minute_1 = stoi(time_1.substr(3,2)), second_1 = stoi(time_1.substr(6,2));
    hour_2 = stoi(time_2.substr(0,2)), minute_2 = stoi(time_2.substr(3,2)), second_2 = stoi(time_2.substr(6,2));

    if(hour_1 > hour_2) diff_hour = hour_2 + (24 - hour_1);
    else diff_hour = hour_2 - hour_1;
    diff_minute = minute_2 - minute_1;
    if(diff_minute < 0) {
        diff_hour--;
        diff_minute += 60;
    }
    diff_second = second_2 - second_1;
    if(diff_second < 0) {
        diff_minute--;
        diff_second += 60;
    }

    if(diff_hour + diff_minute + diff_minute == 0) diff_hour += 24;

    string h, m, s;

    if(diff_hour < 10) h = '0' + to_string(diff_hour);
    else h = to_string(diff_hour);

    if(diff_minute < 10) m ='0' + to_string(diff_minute);
    else m = to_string(diff_minute);

    if(diff_second < 10) s = '0' + to_string(diff_second);
    else s = to_string(diff_second);

    cout << h << ":" << m << ":" << s;



}