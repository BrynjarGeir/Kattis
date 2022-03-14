#include <iostream>
using namespace std;

int main() {
    int T;
    string all_noices, single_animal;
    cin >> T;
    cin.ignore();
    while(T--) {
        getline(cin, all_noices);
        while(getline(cin, single_animal) && single_animal != "what does the fox say?") {
            single_animal = single_animal.substr(single_animal.find("goes ")+5);
            single_animal = single_animal;
            while(all_noices.find(single_animal) != string::npos) {
                if(single_animal == all_noices.substr(0,single_animal.size())) {
                    all_noices = all_noices.substr(single_animal.size()+1);
                    continue;
                }
                single_animal = ' ' + single_animal;
                int pos = all_noices.find(single_animal);
                all_noices = all_noices.substr(0,pos) + all_noices.substr(pos + single_animal.size());
            }
        }
        cout << all_noices;
        if(T != 0) cout << endl;
    }
}