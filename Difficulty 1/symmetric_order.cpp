#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, set = 1;
    while(cin >> n && n != 0) {
        cout << "SET " << set << endl; 
        deque<string> names_first, names_second;
        string name;
        for(int i = 0; i < n; i++) {
            cin >> name;
            if(i%2 == 0) names_first.push_back(name);
            else names_second.push_front(name);
        }

        while(!names_first.empty()) {
            cout << names_first.front() << endl;
            names_first.pop_front();

        }

        while(!names_second.empty()) {
            cout << names_second.front() << endl;
            names_second.pop_front();
        }


        set++;
    }
}