#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    cout << fixed << setprecision(9);
    int n;
    cin >> n;
    string name;
    double tf, ts;
    vector<pair<double, string>> first, second;

    while(n--) {
        cin >> name >> tf >> ts;
        first.push_back({tf, name});
        second.push_back({ts, name});
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    double min_time = INT32_MAX;
    vector<string> answer;

    for(int i = 0; i < 4; i++) {
        vector<string> current_names;
        current_names.push_back(first.at(i).second);
        double curr_time = first.at(i).first;
        int pos = 0;
        while(current_names.size() < 4) {
            if(find(current_names.begin(), current_names.end(), second.at(pos).second) == current_names.end()) {
                current_names.push_back(second.at(pos).second);
                curr_time += second.at(pos).first;
            }
            pos++;
        }
        if(curr_time < min_time) {min_time = curr_time; answer = current_names;}
    }

    cout << min_time << endl << answer.at(0) << endl << answer.at(1) << endl << answer.at(2) << endl << answer.at(3);
}