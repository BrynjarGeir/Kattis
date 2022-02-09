#include <iostream>
using namespace std;

int main() {
    int n, g, gnome, prev;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> g >> prev;
        bool stop = false;
        for(int j = 1; j < g; j++) {
            cin >> gnome;
            if(!stop && gnome != prev + 1) {
                cout << j + 1 << endl;
                stop = true;
            }
            prev = gnome;
        }
    }
}