#include <iostream>
#include <math.h>
#include <deque>
using namespace std;

int main() {
    deque<int> need, have;
    need.push_back(1), have.push_back(0);
    int n, amount;
    cin >> n;

    for(int i = 0; i < n-1; i++) {
        cin >> amount;
        have.push_back(amount);        
    }

    int used[31];

    while(!need.empty() && need.size() < have.size()) {
        int size_needed = need.size() - 1;
        if(have.at(size_needed) < 2*need.back()) need.push_back(2 * need.back() - have.at(size_needed));
        else {
            used[size_needed] += 2 * need.back();
            have.at(size_needed) -= 2 * need.back();
            need.pop_back();
        }        
    }

    if(!need.empty()) cout << "impossible";
    else {
        double length_used = 0, length = pow(2, -5.0/4), width = pow(2, -3.0/4);
        for(int i = 2; i < 31; i++) {
            length_used += used[i] * length;
            length /= sqrt(2);
            width /= sqrt(2);
            double tmp = length;
            length = width;
            width = tmp;
        }
        cout << length_used;
    }
}