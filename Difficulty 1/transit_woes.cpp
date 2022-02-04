#include <iostream>
#include <deque>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main() {
    int time,class_starts,transit_routes;
    string line;
    deque<int> numbers;
    getline(cin, line);

    stringstream ss(line);
    for (int i = 0; ss >> i;) {
        numbers.push_back(i);
    }

    time = numbers.front();
    numbers.pop_front();
    class_starts = numbers.front();
    numbers.pop_front();
    transit_routes = numbers.front();
    numbers.pop_front();
    
    deque<int> walk, ride, interval;
    
    getline(cin, line);
    stringstream sw(line);
    for (int i = 0; sw >> i;) {
        walk.push_back(i);
    }

    getline(cin, line);
    stringstream sr(line);
    for (int i = 0; sr >> i;) {
        ride.push_back(i);
    }

    getline(cin, line);
    stringstream si(line);
    for (int i = 0; si >> i;) {
        interval.push_back(i);
    }

    for (int i = 0; i < transit_routes; i++) {
        time += walk.front();
        time += time % interval.front();
        time += ride.front();
        walk.pop_front(); ride.pop_front(); interval.pop_front();
    }

    time += walk.front();

    if (time < class_starts) {
        cout << "yes";
    } else {
        cout << "no";
    }
}