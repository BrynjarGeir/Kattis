#include <iostream>
using namespace std;

int main() {
    int n, p, d;
    string pattern;
    cin >> n >> p >> d;
    cin >> pattern;

    int tired = 0;
    for(int i = 0; i < pattern.size(); i++) {
        int prev = i - p + 1;
        int counter = 0;
        for(int j = prev; j <= i; j++) {
            if(pattern[j] == 'Z') counter++;
        }
        if(counter < d) tired++;
    }

    cout << tired;
}