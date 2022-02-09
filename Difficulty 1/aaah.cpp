#include <iostream>
using namespace std;

int main() {
    string marius, doctor;
    int count_marius = 0, count_doctor = 0;

    cin >> marius;

    cin >> doctor;

    for (char c: marius) {
        if (c == 'a') {
            count_marius++;
        }
    }
    for (char c: doctor) {
        if (c == 'a') {
            count_doctor++;
        }
    }

    if (count_doctor > count_marius) {
        cout << "no";
    } else {
        cout << "go";
    }
}