#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[3];
    for(int i = 0; i < 3; i++) cin >> nums[i];

    sort(nums, nums + 3);

    int diff;
    if(nums[1] - nums[0] == nums[2] - nums[1]) {
        diff = nums[1] - nums[0];
        cout << nums[2] + diff;
    } else if(nums[1] - nums[0] > nums[2] - nums[1]) {
        diff = nums[2] - nums[1];
        cout << nums[0] + diff;
    } else if(nums[1] - nums[0] < nums[2] - nums[1]) {
        diff = nums[1] - nums[0];
        cout << nums[1] + diff;
    }
}