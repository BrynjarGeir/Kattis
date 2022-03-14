#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N, value;
    string command;
    deque<int> front, back;
    cin >> N;
    while(N--) {
        cin >> command >> value;

        if(command == "push_back") back.push_back(value);
        else if(command == "push_front") front.push_front(value);
        else if (command == "push_middle") teque.insert(teque.begin()+(teque.size()+1)/2, value);
        else cout << teque.at(value) << endl;
    }    
}