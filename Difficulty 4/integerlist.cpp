#include <iostream>
#include <deque>
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        deque<int> dq;
        bool front = true, error = false;
        int n, number;
        char symbol;
        string instructions, list;
        cin >> instructions >> n >> list;
        istringstream ss(list);
        while(n != 0 && ss >> symbol && symbol != ']') {
            ss >> number;
            dq.push_back(number);
        }
        for(char i: instructions) {
            if(i == 'R') front = !front;
            else if(dq.size() == 0) {error = true; break;}
            else if(front) dq.pop_front();
            else dq.pop_back();
        }

        if(error) cout << "error" << endl;
        else if(front) {
            cout << "[";
            for(int i = 0; i < dq.size()-1; i++) cout << dq.at(i) << ",";
            cout << dq.back() << "]" << endl;
        } else {
            cout << "[";
            for(int i = dq.size() - 1; i > 0; i--) cout << dq.at(i) << ",";
            cout << dq.front() << "]" << endl;
        }
    }

}