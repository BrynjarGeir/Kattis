#include <iostream>
#include <map>
using namespace std;

int main() {
    int k, m;
    string course;

    while(cin >> k && k != 0) {
        cin >> m;
        bool can_graduate = true;
        map<string, bool> courses_selected;
        for(int i = 0; i < k; i++) {
            cin >> course;
            courses_selected[course] = true;
        }

        for(int i = 0; i < m; i++) {
            int c, r;
            cin >> c >> r;
            int taking = 0;
            for(int j = 0; j < c; j++) {
                cin >> course;
                if(courses_selected[course]) taking++;
            }
            if(taking < r) {can_graduate = false;}
        }

        if(can_graduate) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}