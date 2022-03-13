#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string message, numbers;
    map<char, string> keypresses = {{'a',"2"}, {'b',"22"}, {'c',"222"}, {'d',"3"}, {'e',"33"}, {'f',"333"}, {'g', "4"}, {'h', "44"}, {'i',"444"}, {'j',"5"}, {'k', "55"}, {'l',"555"}, {'m', "6"}, {'n',"66"}, {'o', "666"}, {'p',"7"}, {'q',"77"}, {'r',"777"}, {'s',"7777"}, {'t',"8"}, {'u', "88"}, {'v',"888"}, {'w',"9"}, {'x',"99"}, {'y',"999"}, {'z',"9999"}, {' ',"0"}};

    for(int i = 1; i <= n; i++) {
        getline(cin, message);
        numbers = "";
        for(char c: message) {
            if(numbers.back() == keypresses[c].front()) numbers += " ";
            numbers += keypresses[c];
        }
        cout << "Case #" << i << ": " << numbers;
        if(i != n) cout << endl;
    }
}