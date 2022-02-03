#include <iostream>
#include <string>

using namespace std;

int main() {
    string nafn;
    int N;
    cin >> N;
    /*while(N>2) {
        N -= 2;
    }*/
    if(N%2==0) nafn="Bob";
    else nafn="Alice";
    cout << nafn;
    return 0;
}
