#include <iostream>
using namespace std;

int main() {
    int N, K;
    string first = "N", second = "A", current;
    cin >> N >> K;

    for(int i = 3; i <= N; i++) {
        current = first + second;
        first = second;
        second = current;
    }

    cout << current.at(K-1);
}