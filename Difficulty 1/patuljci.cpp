#include <iostream>
using namespace std;

int main() {
    int hats[9], sum = 0, pos = -1;
    for(int i = 0; i < 9; i++) {
        cin >> hats[i];
        sum += hats[i];
    }

    int not_a, not_b;
    bool br = false;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(i != j && sum - hats[i] - hats[j] == 100) {
                br = true;
                not_a = i;
                not_b = j;
                break;
            }
        }
        if(br) break;
    }
    for(int i = 0; i < 9; i++) if(i != not_a && i != not_b) cout << hats[i] << endl; 

 }