#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, child = 0, places;
    cin >> n >> k;
    vector<int> commands;
    string command;

    for(int i = 0; i < k; i++) {
        cin >> command;
        if(command != "undo") {
            places = stoi(command);
            places %= n;
            commands.push_back(places);
            child += places;
            if(child >= n) child -= n;
            else if(child < 0) child += n;
        } else {
            if(commands.size() == 0) {
                cin >> command;
            } else {
                cin >> command;
                places = stoi(command);
                for(int j = commands.size()-1; j > commands.size() - places - 1; j--) {
                    child -= commands.at(j);
                    if(child >= n) child -= n;
                    else if(child < 0) child += n;
                }
                commands.clear();
            }
        }
        cout << child << " ";
    }

    cout << child;


}