#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <string>
using namespace std;

int main() {
    int N, t, pos1, pos2, ampm;
    string line;

    getline(cin, line);
    N = stoi(line);
    while (N != 0) {

        vector<tuple<int, int, string, string>> time_o_day;
        for(int i = 0; i < N; i++) {
            getline(cin, line);
    	    pos1 = line.find(':');
            pos2 = line.find(' ');
            t = stoi(line.substr(0,pos1) + line.substr(pos1+1,pos1+3));
            if (t >= 1200) t -= 1200;
            if (line.substr(pos2).find('a') != string::npos) ampm = 0;
            else ampm = 1;
            tuple<int, int, string, string> to_sort = make_tuple(ampm, t, line.substr(0,pos2), line.substr(pos2));
            time_o_day.push_back(to_sort);
        }
        sort(time_o_day.begin(), time_o_day.end());

        for(tuple<int, int, string, string> time: time_o_day) {
            cout << get<2>(time) << " " << get<3>(time) << endl;
        }
        cout << endl;

        getline(cin, line);
        N = stoi(line);
    }
}