#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int N, k, gallery;

    cin >>  N >> k;

    map<pair<int, int>, pair<bool, int>> art_gallery;
    vector<tuple<int, int, int>> galleries;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < N; j++) {
            cin >> gallery;
            art_gallery[make_pair(i, j)] = make_pair(false, gallery);
            galleries.insert(make_tuple(gallery, i, j));
        }
    }
    sort(galleries.begin(), galleries.end());

    for(tuple<int, int, int> g: galleries) {
        x = get<1>(g), y = get<2>(g);
        if(y == 1) {
            if(art_gallery[make_pair(x-1,y-1)].first == false)
        }
    }


}