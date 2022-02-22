#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int nx, ny;
    double w, xi, yi, total_width, total_length;
    bool bw, bl;
    vector<pair<double, double>> length, width;

    for(int i = 0; i < 50; i++) {
        cin >> nx >> ny >> w;

        if (nx == 0 && ny == 0 && w == 0.0) break;

        width.clear();
        for (int j = 0; j < nx; j++) {
            cin >> xi;
            width.push_back(make_pair(max(0.0,xi-w/2), min(75.0, xi+w/2)));
        }

        sort(width.begin(), width.end());

        for(int j = 0; j < nx; j++) {
            if (j == nx-1 && width[j].second == 75.0) {
                bw = true;
                break;
            }
            else if ((j == nx - 1) || (j == 0 && width[j].first != 0.0) ||  width[j].second < width[j+1].first) {
                bw = false;
                break;
            }
        }

        length.clear();
        for (int j = 0; j < ny; j++) {
            cin >> yi;
            length.push_back(make_pair(max(0.0,yi-w/2), min(100.0, yi+w/2)));
        }

        sort(length.begin(), length.end());
        for (int j = 0; j < ny; j++) {
            if (j == ny-1 && length[j].second == 100.0) {
                bl = true;
                break;
            }
            else if ((j == ny - 1) || (j == 0 && length[j].first != 0.0) || (length[j].second < length[j+1].first)) {
                bl = false;
                break;
            }
        }

        if(bw && bl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}