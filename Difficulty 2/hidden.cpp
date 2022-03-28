#include <iostream>
using namespace std;

int main() {
    string P, S;
    int pre = -1, nxt;
    cin >> P >> S;

    string new_S = "";
    for(char c: S) {
        if(new_S.find(c) == string::npos) new_S += c;
    }

    S = new_S;

    bool pass = true;
    for(char c: P) {
        int pos = S.find(c);
        if(pos == string::npos) {
            pass = false;
            break;
        } else {
            if(pre = -1) pre = pos;
            else {
                if(pos < pre) {
                    pass = false;
                    break;
                }
                pre = pos;
            }
        }
    }

    if(pass) cout << "PASS";
    else cout << "FAIL"; 


}