#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(6);
    double n, student, total = 0, average = 0;
    vector<int> students;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> student;
        total += student * pow(0.8,  i);
        students.push_back(student);
    }

    total *= 0.2;
    cout << total << endl;

    for(int i = 0; i < n; i++) {
        double curr_average = 0;
        for(int j = 0; j < n; j++) {
            if(j < i) {
                curr_average += students[j] * pow(0.8, j);
            } else if(j > i) {
                curr_average += students[j] * pow(0.8, j-1);
            }
        }
        curr_average *= 0.2;
        average += curr_average;
    }

    average /= n;
    cout << average;
}