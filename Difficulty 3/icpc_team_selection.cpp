#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int datasets, N, n, student, ans;
    cin >> datasets;

    while(datasets--) {
        cin >> N;
        n = N * 3;
        ans = 0;
        vector<int> students;
        while(n--) {
            cin >> student;
            students.push_back(student);
        }
        sort(students.begin(), students.end());
        for(int i = 0; i < N; i++) {
            ans += students[2 * i + 1];
        } 
        cout << ans << endl;
    }
}