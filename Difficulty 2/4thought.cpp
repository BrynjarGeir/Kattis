#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int eval(int a, int b, char op) {
    switch (op) {
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '+':
            return a + b;
        case '-':
            return a - b;
    }
}

void tryCombs(int m) {
    char symbols[4] = {'*','+','-','/'};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
                deque<int> dq = {4, 4, 4, 4};
                deque<char> smbs = {symbols[i], symbols[j], symbols[k]};
                while(dq.size() > 1) {
                    char op;
                    int pos = -1;
                    for(int i = 0; i < smbs.size(); i++) if(smbs.at(i) == '*' || smbs.at(i) == '/') {op = smbs.at(i); pos = i; break;}
                    if(pos == -1) {
                        int a = dq.front();
                        dq.pop_front();
                        int b = dq.front();
                        dq.pop_front();
                        op = smbs.front();
                        smbs.pop_front();
                        int value = eval(a, b, op);
                        dq.push_front(value);
                    } else {
                        int a = dq.at(pos), b = dq.at(pos+1);
                        int value = eval(a, b, op);
                        dq.erase(dq.begin() + pos + 1);
                        dq.at(pos) = value;
                    }
                }
                if(dq.front() == m) {cout << "4 " << symbols[i] << " 4 " << symbols[j] << " 4 " << symbols[k] << " 4" << endl; return;}
            }
        }
    }
    cout << "no solution" << endl;
}

int main() {
    int m;
    cin >> m;

    while(m--) {
        int num;
        cin >> num;
        if(num > 256 || num < -60) cout << "no solution" << endl;
        else tryCombs(num);
    }
}