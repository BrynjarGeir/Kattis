#include <iostream>
#include <map>
using namespace std;

int restart_value = 0;

struct Node {
    int value = restart_value;
};

int main() {
    int N, Q, i, x;
    cin >> N >> Q;
    string command;

    map<int, Node> mapping;

    while(Q--) {
        cin >> command;
        if(command == "SET") {
            cin >> i >> x;
            mapping[i].value = x;
        } else if(command == "PRINT") {
            cin >> i;
            cout << mapping[i].value << endl;
        } else {
            cin >> x;
            restart_value = x;
            map<int, Node> tmp;
            mapping = tmp;
        }
    }
}