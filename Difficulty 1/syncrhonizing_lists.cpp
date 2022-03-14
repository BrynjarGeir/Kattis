#include <iostream>
using namespace std;

int main() {
    int n;

    while(cin >> n && n != 0) {
        int first[n], second[n];
        for(int i = 0; i < n; i++) {
            cin >> first[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> second[i];
        }
    }
}