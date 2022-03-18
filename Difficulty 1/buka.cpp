#include <iostream>
using namespace std;

int main() {
    string num1, op, num2;
    cin >> num1 >> op >> num2;
    if(op == "+") {
        if(num1.size() == num2.size()) {
            num1.at(0) = '2';
            cout << num1;
        } else if(num1.size() > num2.size()) {
            num1.at(num1.size()-num2.size()) = '1';
            cout << num1;
        } else {
            num2.at(num2.size()-num1.size()) = '1';
            cout << num2;
        }
    } else {
        string new_num = "1";
        int total_0 = num1.size() + num2.size() - 2;
        for(int i = 0; i < total_0; i++) {
            new_num += '0';
        }
        cout << new_num;
    }
}