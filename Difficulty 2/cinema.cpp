#include <iostream>
using namespace std;

int main() {
    int N, M, visitors, left = 0;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> visitors;
        if(N - visitors < 0) left++;
        else N -= visitors;
    }

    cout << left;
}