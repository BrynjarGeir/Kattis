#include <iostream>
using namespace std;

int main() {
    int fav;
    cin >> fav;

    if(fav < 26) {
        cout << 'a' << (char)(97 + fav);
    } else {
        string name_tag = "";
        fav += 25;
        while(fav > 25) {
            if(name_tag.back() == 'a') name_tag += 'z';
            else name_tag += 'a';
            fav -= 25;
        }
        char last_one;
        if(name_tag.back() == 'a') {
            last_one = (char)(97+fav);
        } else {
            last_one = (char)(97+25-fav);
        }

        name_tag += last_one;

        cout << name_tag;
    }
}