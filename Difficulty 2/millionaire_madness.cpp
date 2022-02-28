#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>> neighbors;
    vector<vector<int>> heights;
    int M, N, height;

    cin >> M >> N;

    for(int i = 0; i < M; i++) {
        heights.push_back({});
        for(int j = 0; j < N; j++) {
            cin >> height;
            heights[i].push_back[height];    
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            neighbors[make_pair(i,j)]
        }
    }
}