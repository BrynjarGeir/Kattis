#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, count = 0;
    string school, team;
    set<string> schools;

    cin >> N;

    while ((count < N) && (schools.size() < 12)) {
        cin >> school >> team;

        if(schools.find(school) != schools.end()) {
            count++;
            continue;
        }
        cout << school << " " << team << endl;
        count++;
        schools.insert(school);
    }
    
}