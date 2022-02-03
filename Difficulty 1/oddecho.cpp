#include <iostream>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> str;
        if (i % 2 == 0) {
            cout << str << endl;
        }
    }
}