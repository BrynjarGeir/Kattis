#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int num_candidates, total_votes = 0, most_votes = -1;
        cin >> num_candidates;
        int candidates[num_candidates];
        for(int i = 0; i < num_candidates; i++) {
            cin >> candidates[i];
            total_votes += candidates[i];
            most_votes = max(most_votes, candidates[i]);
        }

        bool no_winner = false;
        int pos_winner = -1;
        for(int i = 0; i < num_candidates; i++) {
            if(candidates[i] == most_votes) {
                if(pos_winner != -1) {no_winner = true; break;}
                pos_winner = i;
            }
        }

        if(no_winner) cout << "no winner" << endl;
        else if(total_votes / most_votes < 2) cout << "majority winner " << pos_winner + 1 << endl;
        else cout << "minority winner " << pos_winner + 1 << endl;
    }
}