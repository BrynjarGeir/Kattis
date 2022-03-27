#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    double fl, sl;
    string name;
    vector<pair<double, string>> first, second;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> name >> fl >> sl;
        first.push_back({fl, name});
        second.push_back({sl, name});
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    int min_time = INT32_MAX;
    vector<pair<double, string>> answer;

    for(int i = 0; i < 4; i++) {
        vector<pair<double, string>> curr_ans;
        curr_ans.push_back(first.at(i));
        vector<string> names;
        names.push_back(first.at(i).second);
        int j = 0;
        double curr_time = 0;
        while(curr_ans.size() < 4) {
            if(find(names.begin(), names.end(), second.at(j).second) == names.end()) {
                curr_ans.push_back(second.at(j));
                names.push_back(second.at(j).second);
                curr_time += second.at(j).first;
            }
            j++;
        }
        if(curr_time < min_time) {
            min_time = curr_time;
            answer = curr_ans;
        }
    }

    cout << min_time;
}