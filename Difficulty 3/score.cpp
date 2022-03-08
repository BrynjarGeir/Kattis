#include <iostream>
using namespace std;

int main() {
    int n, lead = 0, home_points = 0, home_lead = 0, away_points = 0, away_lead = 0, points;
    int minutes, seconds, curr_time, prev_time = 0;
    string time;
    char team;
    cin >> n;
    while(n--) {
        cin >> team >> points >> time;
        minutes = stoi(time.substr(0,time.find(':')));
        seconds = stoi(time.substr(time.find(':')+1));
        curr_time = minutes * 60 + seconds;
        if(home_points > away_points) home_lead += curr_time - prev_time;
        else if(home_points < away_points) away_lead += curr_time - prev_time;
        prev_time = curr_time;
        if(team == 'H') home_points += points;
        else away_points += points;
    }

    if(curr_time < 32*60) {
        if(home_points > away_points) {
            home_lead += 32*60 - curr_time;
        } else if(home_points < away_points) {
            away_lead += 32*60 - curr_time;
        }
    }

    if(home_points > away_points) cout << 'H' << ' ';
    else cout << 'A' << ' ';

    string hl = to_string(home_lead % 60);
    if(home_lead % 60 < 10) hl = '0' + hl;
    string al = to_string(away_lead % 60);
    if(away_lead % 60 < 10) al = '0' + al;
    cout << home_lead / 60 << ':' << hl << ' ' << away_lead / 60 << ":" << al;
}