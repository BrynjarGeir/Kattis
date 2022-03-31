#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    map<char, set<char>> mapping;
    int N, M, K;
    char students[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> students[N][M];
        }
    }

    for(int j = 0; j < M; j++) {
        char first_in_alphabet = 'Z';
        set<char> column;
        for(int i = 0; i < N; i++) {
            if(students[i][j] < first_in_alphabet) first_in_alphabet = students[i][j];
            column.insert(students[i][j]);
        }
    }
}