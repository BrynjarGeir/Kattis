#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n, k, request_time;
    cin >> n >> k;
    k = floor((double)1000 / k);
    vector<int> occupied;
    while(n--) {
        cin >> request_time;
        if(occupied.empty()) {
            occupied.push_back(request_time);
        } else {
            bool found = false;
            for(int i = 0; i < occupied.size(); i++) {
                if(occupied[i] + k <= request_time) {
                    occupied[i] = request_time;
                    found = true;
                    break;
                }
            }
            if(!found) occupied.push_back(request_time);
        }
    }
    cout << occupied.size();
}