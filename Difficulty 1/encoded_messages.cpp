#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, pos, mov;
    string line, tmp;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> line;
        tmp = "";
        int size = line.size();
        mov = (int)sqrt(size);
        pos = mov-1;
        while (tmp.size() < size) {
            tmp += line.at(pos);
            pos += mov;
            if (pos >= line.size()) {
                pos -= line.size() + 1;
            } 
        }
        cout << tmp << endl;
    }


}