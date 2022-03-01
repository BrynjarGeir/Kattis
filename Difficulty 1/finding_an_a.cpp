#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    cout << word.substr(word.find('a'));
}