#include <iostream>
using namespace std;

int main() {
    string w;
    cin >> w;

    int current_index = 0, current_char = 97, inputs = 0;

    for(int i = 0; i < 26; i++)  {
        current_index = w.substr(current_index).find((char)current_char);
        if(current_index == string::npos) {
            inputs += (97+26) - current_char;
            break;
        }
        current_char++;
    }

    cout << inputs;
}