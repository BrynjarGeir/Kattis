#include <iostream>
using namespace std;

int main() {
    string encr, first, second, new_first = "", new_second = "", ans = "";
    int null_set = 65, first_rotation = 0, second_rotation = 0;

    cin >> encr;

    first = encr.substr(0, encr.size()/2), second = encr.substr(encr.size()/2);

    for(int i = 0; i < encr.size() / 2; i++) {
        first_rotation += first[i] - 65;
        second_rotation += second[i] - 65;
    }

    first_rotation %= 26, second_rotation %= 26;

    for(int i = 0; i < encr.size() / 2; i++) {
        char current = (first[i] - 65 + first_rotation) % 26 + 65;
        new_first += current;
        current = (second[i] - 65 + second_rotation) % 26 + 65;
        new_second += current;
    }

    for(int i = 0; i < encr.size() / 2; i++) {
        char current = (new_first[i] - 65 + new_second[i] - 65) % 26 + 65;
        ans += current;
    }

    cout << ans;
}