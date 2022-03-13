#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmpInts(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

int main() {
    int N, T, money, time;;
    cin >> N >> T;
    vector<pair<int, int>> people;
    for(int i = 0; i < N; i++) {
        cin >> money >> time;
        people.push_back(make_pair(money, time));
    }

    sort(people.begin(), people.end(), cmpInts);
    time = 0;
    int served = 0;
    while(time < T) {
        if(people.front().second >= time) {
            people.erase(people.begin());
        } else break;
        time++;
    }

    int left = 0;
    for(int i = 0; i < people.size(); i++) {
        left += people.at(i).first;
    }

    cout << left;
}