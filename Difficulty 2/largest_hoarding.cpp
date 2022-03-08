#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, H, W;
    cin >> N;
    vector<pair<int, int>> skyscrapers;
    int max_area = -1;
    
    while(N--) {
        cin >> H >> W;
        skyscrapers.push_back(make_pair(H, W));
    }

    for(int i = 0; i < skyscrapers.size(); i++) {
        int left_area = 0, right_area = 0;
        int j = i - 1, k = i + 1;
        while(j >= 0 && skyscrapers.at(j).first <= skyscrapers.at(i).first) {
            left_area += skyscrapers.at(j).first*skyscrapers.at(i).second;
            j--;
        }
        while(k < skyscrapers.size() && skyscrapers.at(k).first <= skyscrapers.at(i).first) {
            right_area += skyscrapers.at(i).first*skyscrapers.at(i).second;
            k++;
        }
        int total_area = left_area + right_area + skyscrapers.at(i).first*skyscrapers.at(i).second;
        max_area = max(max_area, total_area);
    }

    cout << max_area * 50;
}