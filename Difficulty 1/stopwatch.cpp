#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 != 0) {
        cout << "still running";
    } else {
        int timer = 0, prev = 0, current;
        bool running = false;
        for (int i = 0; i < N; i++) {
            if (running) {
                running = !running;
                cin >> current;
                timer += current - prev;
                prev = current;
            } else {
                running = !running;
                cin >> prev;
            }
        }
        cout << timer;
    }
}