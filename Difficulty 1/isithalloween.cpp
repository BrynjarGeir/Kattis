#include <iostream>
#include <string>
using namespace std;

int main() {
    string month, day;

    cin >> month >> day;

    if ((month == "OCT" && day == "31") || (month == "DEC" && day == "25")) {
        cout << "yup";
    } else {
        cout << "nope";
    }
}