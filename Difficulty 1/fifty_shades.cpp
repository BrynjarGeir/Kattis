#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, counter = 0;
    cin >> N;
    string word;

    for (int i = 0; i < N; i++) {
        cin >> word;

        transform(word.begin(), word.end(), word.begin(), [](unsigned char c){return tolower(c);});

        if ((word.find("rose") != string::npos) || (word.find("pink") != string::npos)) {
            counter++;
        }
    }

    if (counter > 0) {
        cout << counter;
    } else {
        cout << "I must watch Star Wars with my daughter";
    }
}