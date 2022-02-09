#include <iostream>
using namespace std;

int main() {
    int N;
    string nd;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> nd;
        cout << nd.length() << endl;
    }
}