#include <iostream>
using namespace std;

int main() {
    int N, M, groups = 0, group;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> group;
        if(N - group < 0) break;
        N -= group;
        groups++; 
    }

    cout << M - groups;
}