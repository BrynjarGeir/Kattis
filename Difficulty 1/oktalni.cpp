#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string bina, octal = "";
    cin >> bina;

    while(bina.size() % 3 != 0) bina = '0' + bina;

    for(int i = 0; i < bina.size(); i += 3) {
        int a = stoi(bina.substr(i, 3), nullptr, 2);
        octal += to_string(a);
    }
    cout << octal;
}