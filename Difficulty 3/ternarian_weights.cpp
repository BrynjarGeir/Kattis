#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int n, weight;
    cin >> n;
    while(n--) {
        cin >> weight;
        vector<int> left, right;
        int first = floor(log(weight) / log(3));
        weight -= first;
        right.push_back(first);

        while(weight != 0) {
            weight
        }
    }
}