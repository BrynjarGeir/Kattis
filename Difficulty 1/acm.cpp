#include <iostream>
#include <map>
using namespace std;

int main() {
    int duration = 0, ans = 0, solved = 0;
    char problem;
    string result;
    map<char, int> problems;

    while (true) {
        cin >> duration;
        if (duration == -1) break;
        cin >> problem >> result;
        if (problems.find(problem) == problems.end()) {
            if (result == "right") {
                ans += duration;
                solved++;
            } else {
                problems[problem] = -1;
            }
        } else if(result == "wrong"){
            problems[problem]--;
        } else if(result == "right") {
            ans += duration - 20 * problems[problem];
            solved++;
        }
    }
    cout << solved << " " << ans;

}