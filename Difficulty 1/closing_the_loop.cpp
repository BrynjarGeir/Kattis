#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> S;
        vector<int> blue, red;
        string segment;
        while(S--) {
            cin >> segment;
            if(segment.back() == 'B') {
                string num = segment.substr(0, segment.size() - 1);
                int v = stoi(num);
                blue.push_back(v);
            } else {
                string num = segment.substr(0, segment.size() - 1);
                int v = stoi(num);
                red.push_back(v);
            }
        }
        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());

        if(red.empty() || blue.empty()) {
            cout << "Case #" << i << ": " << 0 << endl; 
        } else {
            int length = 0;
            while(!red.empty() && !blue.empty()) {
                length += red.back() + blue.back() - 2;
                red.pop_back(), blue.pop_back();
            }
            cout << "Case #" << i << ": " << length << endl;
        }
    }
}