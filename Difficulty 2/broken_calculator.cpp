#include <iostream>
using namespace std;

int main() {
    int tests, a, b;
    long long prev_ans = 1, curr_ans;
    char operation;
    cin >> tests;

    while(tests--) {
        cin >> a >> operation >> b;
        if(operation == '+') {
            curr_ans = a + b - prev_ans;
            prev_ans = curr_ans;
            cout << curr_ans;
        } else if(operation == '-') {
            curr_ans = (a - b) * prev_ans;
            prev_ans = curr_ans;
            cout << curr_ans;
        } else if(operation == '*') {
            curr_ans = (a*b)*(a*b);
            prev_ans = curr_ans;
            cout << curr_ans;
        } else {
            if(a%2 == 0) {
                curr_ans = a / 2;
            } else {
                curr_ans = (a+1) / 2;
            }
            prev_ans = curr_ans;
            cout << curr_ans;
        }

        if(tests != 0) cout << endl;
    }

}