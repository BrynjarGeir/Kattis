#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b;
    cin >> n;

    vector<int> answers(1024, -1);
    for(int i = 0; i < 511; i++) {
        int tmp = i ^ (i << 1) & 255;
        answers[tmp] = i;
    }

    while(n--) {
        cin >> b;
        cout << answers[b] << " ";
    }
}