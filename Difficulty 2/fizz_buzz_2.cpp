#include <iostream>
#include <regex>
using namespace std;

bool isNumber(string x) {
    regex e ("^-?\\d+");
    if (regex_match (x,e)) return true;
    else return false;
}

int main() {
    int N, M;
    string post;

    cin >> N >> M;
    int most_correct[N], max_correct = -1, correct_index = -1;

    for(int n = 0; n < N; n++) {
        int correct = 0;
        for(int m = 1; m <= M; m++) {
            cin >> post;
            if(m % 3 == 0 && m % 5 == 0) {
                if(post == "fizzbuzz") correct++;
            } else if(m % 3 == 0) {
                if(post == "fizz") correct++;
            } else if(m % 5 == 0) {
                if(post == "buzz") correct++;
            } else {
                for(char c: post) {}
            };
        }
        most_correct[n] = correct;
        if (correct == M) {
            cout << n + 1;
            return 0;
        }
        else if (correct > max_correct) {
            max_correct = correct;
            correct_index = n + 1;
        }
    }

    cout << correct_index;

}