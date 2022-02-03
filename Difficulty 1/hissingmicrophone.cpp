#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;

    cin >> ans;

    if(ans.find("ss") != string::npos) {
        cout << "hiss";
    } else {
        cout << "no hiss";
    }
}