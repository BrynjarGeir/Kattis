#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<vector<int>, int> courses;
    int n, course;
    cin >> n;

    while(n--) {
        vector<int> cs;
        for(int i = 0; i < 5; i++) {
            cin >> course;
            cs.push_back(course);
        }
        sort(cs.begin(), cs.end());

        if(courses.find(cs) != courses.end()) {
            courses[cs]++;
        } else {
            courses[cs] = 1;
        }
    }

    map<vector<int>, int>::iterator it;
    int max_conformity = -1;
    for(it = courses.begin(); it != courses.end(); it++) {
        max_conformity = max(max_conformity, it->second);
    }

    int total_conformity = 0;
    for(it = courses.begin(); it != courses.end(); it++) {
        if(it->second == max_conformity) total_conformity += it->second;
    }

    cout << total_conformity;

}