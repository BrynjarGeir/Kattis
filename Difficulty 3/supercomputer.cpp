#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> memory(N+1,0);
    char c;
    int num_1, num_2;

    for(int i = 0; i < K; i++) {
        cin >> c;
        if(c == 'F') {
            cin >> num_1;
            if(memory[num_1] == 1) memory[num_1] = 0;
            else memory[num_1] = 1;
        } else {
            cin >> num_1 >> num_2;
            int counter = 0;
            for(int j = num_1; j <= num_2; j++) {
                counter += memory[j];
            }
            cout << counter << endl;
        }
    }
}