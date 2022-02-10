#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, r, d;
    string color, number;
    vector<pair<int, string>> cr;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> color >> number;
        bool digit = isdigit(color[0]);
        if (digit) {
            cr.push_back(make_pair(stoi(color), number));
        } else {
            cr.push_back(make_pair(stoi(number)*2, color));
        }
    }
    sort(cr.begin(), cr.end());

    for(pair<int, string> p: cr) {
        cout << p.second << endl;
    }
}