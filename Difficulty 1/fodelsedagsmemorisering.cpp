#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string birthday, name;
    int likely, N, day, month;
    map<int, pair<int, string>> birthdays;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> name >> likely >> birthday;
        
        day = stoi(birthday.substr(0,2));
        month = stoi(birthday.substr(3)) - 1;
        
        for (int i = 0; i < month; i++) {
            day += months[i];
        }

        if(birthdays.find(day) == birthdays.end()) {
            birthdays[day] = make_pair(likely, name);
        } else if (likely > birthdays[day].first) {
            birthdays[day] = make_pair(likely, name);
        }
    }

    cout << birthdays.size() << endl;

    vector<string> names;
    auto iter = birthdays.begin();
    while (iter != birthdays.end()) {
        names.push_back(get<1>(iter->second));
        ++iter;
    }

    sort(names.begin(), names.end());

    for (string n: names) {
        cout << n << endl;
    }

}