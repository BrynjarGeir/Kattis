#include <iostream>
#include <deque>
#include <sstream>
using namespace std;

void printWH(deque<int> dq, bool front) {
    cout << "[";
    if(front) {
        for(int i = 0; i < dq.size(); i++) {
            cout << dq.at(i);
            if(i != dq.size() - 1) cout << ",";
        }
    } else {
        for(int i = dq.size() - 1; i >= 0; i--) {
            cout << dq.at(i);
            if(i != 0) cout << ",";
        }
    }
    cout << "]" << endl;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        string command, list;
        int n, number;
        char symbol;
        bool front = true, error = false;
        deque<int> dq;
        cin >> command >> n >> list;
        istringstream ss(list);
        for(int i = 0; i < n; i++) {
            ss >> symbol >> number;
            dq.push_back(number);
        }

        for(auto c: command) {
            if(c == 'R') front = !front;
            else if(!dq.empty()) {
                if(front) dq.pop_front();
                else dq.pop_back();
            } else {error = true; break;}
        }

        if(error) cout << "error" << endl;
        else printWH(dq, front);
        cin.ignore();
    }
}