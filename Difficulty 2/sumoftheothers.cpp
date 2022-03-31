#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool subsum(vector<int> nums, int target_pos) {
    int ans = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(i != target_pos) ans += nums.at(i);
    }
    return ans == nums.at(target_pos);
}

int main() {
    string line;
    int num;
    while(getline(cin, line)) {
        istringstream ss(line);
        vector<int> nums;
        while(ss >> num) nums.push_back(num);
        sort(nums.begin(), nums.end());
        for(int target_pos = 0; target_pos < nums.size(); target_pos++) {
            if(subsum(nums, target_pos)) {cout << nums.at(target_pos) << endl; break;}
        }
    }
}