#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++) {
        vector<int> f, s;
        int n, num;
        cin >> n;

        for(int j = 0; j < n; j++) {
            cin >> num;
            f.push_back(num);
        }

        for(int j = 0; j < n; j++) {
            cin >> num;
            s.push_back(num);
        }

        sort(f.begin(), f.end());
        sort(s.begin(), s.end());

        int scalar_product = 0;
        for(int j = 0; j < n; j++) {
            scalar_product += f.at(j) * s.at(n-1-j);
        }

        cout << "Case #" << i << ": " << scalar_product << endl;
    }
}