#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C, N;
    cout << fixed << setprecision(3);
    cin >> C;

    while(C--) {
        cin >> N;
        double above_average = 0, avg_grade = 0;
        int grades[N];

        for(int i = 0; i < N; i++) {
            cin >> grades[i];
            avg_grade += grades[i];
        }

        avg_grade /= N;
        for(int i = 0; i < N; i++) {
            if(grades[i] > avg_grade) above_average++;
        }

        double ans = (above_average/N)*100;

        cout << ans << '%';
        if(C != 0) cout << endl;
    }
}