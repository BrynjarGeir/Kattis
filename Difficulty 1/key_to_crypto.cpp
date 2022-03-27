#include <iostream>
using namespace std;

int main() {
    string ciphertext, secret_word, original_word;
    cin >> ciphertext >> secret_word;
    char start = 'A';
    for(int i = 0; i < ciphertext.size(); i++) {
        char new_char = start + ciphertext.at(i) - secret_word.at(i);
        if(new_char < start) new_char += 26;
        secret_word += new_char;
        original_word += new_char;
    }

    cout << original_word;
}