#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());

    int smaller = min(first.size(), second.size());
    string ans_f = "", ans_s = "";

    for(int i = 0; i < smaller; i++) {
        if(first.at(i) > second.at(i)) {
            ans_f += first.at(i);
        } else if(first.at(i) < second.at(i)) {
            ans_s += second.at(i);
        } else{
            ans_f += first.at(i);
            ans_s += second.at(i);
        }
    }
    if(first.size() == second.size()) {}
    else if(smaller == first.size()) ans_s += second.substr(smaller);
    else ans_f += first.substr(smaller);

    reverse(ans_f.begin(), ans_f.end());
    reverse(ans_s.begin(), ans_s.end());
    if(ans_f.empty()) cout << "YODA" << endl;
    else cout << stoi(ans_f) << endl;
    if(ans_s.empty()) cout << "YODA";
    else cout << stoi(ans_s);
}