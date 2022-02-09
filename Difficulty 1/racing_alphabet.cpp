#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main() {
    int N;
    double time, curr, step = M_PI / (28.0*15.0/60); //The step is in feet so to get time with 15 feet/s you just need step/15/feet/s
    string apho, n;
    double prev;
    map<char, double> circle = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
                                {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14}, {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18},
                                {'T', 19}, {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}, {' ', 26}, {'\'', 27}};

    getline(cin, n);
    N = stoi(n);

    for (int i = 0; i < N; i++) {
        getline(cin, apho);
        time = 0, prev = -1;
        for (char c: apho) {
            if (prev == -1) {
                prev = circle[c];
            } else {
                curr = circle[c];
                time += step*min(abs(curr - prev), 28-abs(curr - prev));
                prev = curr;
            }
        }
        cout << fixed << time + apho.size() << endl;
    }
}