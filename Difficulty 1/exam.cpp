#include <iostream>
using namespace std;

int main() {
    int friend_correct, mine_correct, questions, matching = 0;
    string mine, his;
    
    cin >> friend_correct;
    cin >> mine;
    cin >> his;

    questions = mine.size();

    for(int i = 0; i < questions; i++) {
        if (mine[i] == his[i]) {
            matching++;
        }
    }

    mine_correct = questions - friend_correct + matching;

    cout << min(questions, mine_correct);

}