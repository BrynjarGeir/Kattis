#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    pair<int,int> rank_1, rank_2;   
    while(cin >> a >> b >> c >> d && a != 0) {
        if(a+b == 3) rank_1 = {0,0};
        else if(a == b) rank_1 = {1,a};
        else {
            rank_1 = {2,max(a*10+b, a+b*10)};
        }
        if(c+d == 3) rank_2 = {0,0};
        else if(c == d) rank_2 = {1,c};
        else {
            rank_2 = {2,max(c*10+d, c+d*10)};
        }

        if(rank_1.first == rank_2.first) {
            if(rank_1.second == rank_2.second) cout << "Tie." << endl;
            else if(rank_1.second < rank_2.second) cout << "Player 2 wins." << endl;
            else if(rank_1.second > rank_2.second) cout << "Player 1 wins." << endl;
        } else if(rank_1.first < rank_2.first) cout << "Player 1 wins." << endl;
        else cout << "Player 2 wins." << endl;
    }
}