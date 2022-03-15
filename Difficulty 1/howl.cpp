#include <iostream>
using namespace std;

int main() {
    string howl;
    cin >> howl;
    int pos = howl.find('O');
    string new_howl = howl.substr(0,pos) + 'O' + howl.substr(pos);
    cout << new_howl;
}