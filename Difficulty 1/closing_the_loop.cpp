#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S, test_case = 1, length;
    string segment;
    bool color;
    cin >> N;

    while(N--) {
        cin >> S;
        vector<int> blue, red;
        while(S--) {
            cin >> segment;
            if(segment.back() == 'B') {
                length = stoi(segment.substr(0,segment.size() - 1));
                blue.push_back(length);
            } else {
                length = stoi(segment.substr(0,segment.size() - 1));
                red.push_back(length);
            }
        }

        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());

        length = 0;

        if(blue.size() > red.size()) color = true;
        else color = false;

        while(!(blue.empty() || red.empty())) {
            if(color) {
                length += blue.back() - 1;
                blue.pop_back();
                color = false;
            } else {
                length += red.back() - 1;
                red.pop_back();
                color = true;
            }
        }

        if(blue.empty() && !red.empty() && !color && length > 0) length += red.back() - 1;
        else if(!blue.empty() && red.empty() && color && length > 0) length += blue.back() - 1;

        cout << "Case #" << test_case++ << ": " << length;
        if(N != 0) cout << endl;
    }
}