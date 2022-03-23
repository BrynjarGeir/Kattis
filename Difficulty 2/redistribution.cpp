#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, room = 1, students, exams_in_pile = 0;
    vector<pair<int, int>> rooms;
    cin >> n;

    while(n--) {
        cin >> students;
        rooms.push_back({students, room});
        room++;
    }

    sort(rooms.begin(), rooms.end());
    bool possible = false;
    for(int i = rooms.size() - 2; i >= 0; i--) {
        if(rooms.at(i+1).first - rooms.at(i).first == 0) {
            possible = true;
            break;
        }
    }

    if(possible) {
        for(int i = rooms.size() - 1; i >= 0; i--) {
            cout << rooms.at(i).second << " ";
        }
    } else {
        cout << "impossible";
    }
}