#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test, curr, max_ones;
    string to_reverse;

    cin >> test;

    for(int i = 0; i < test; i++)  {
        cin >> curr;
        max_ones = 0;
        to_reverse = to_string(curr);
        reverse(to_reverse.begin(), to_reverse.end());
        
    }
}