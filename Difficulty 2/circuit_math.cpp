#include <iostream>
using namespace std;

int main() {
    int ans = 'a';
    cout << ans;
    int n;
    char current;
    cin >> n;
    bool letters[n];
    for(int i = 0; i < n; i++) {
        cin >> current;
        if(current == 'F') letters[i] = false;
        else letters[i] = true;
    }
}