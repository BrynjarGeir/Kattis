#include <iostream>
using namespace std;

int main() {
    string adrian = "ABC", bruno = "BABC", goran = "CCAABB", correct;
    int number, correct_adrian = 0, correct_bruno = 0, correct_goran = 0;
    cin >> number >> correct;

    for(int i = 0; i < number; i++) {
        if(correct.at(i) == adrian.at(i%3)) correct_adrian++;
        if(correct.at(i) == bruno.at(i%4)) correct_bruno++;
        if(correct.at(i) == goran.at(i%6)) correct_goran++;
    }

    if(correct_adrian == correct_goran && correct_bruno == correct_goran) {
        cout << correct_adrian << endl << "Adrian" << endl << "Bruno" << endl << "Goran";
    } else if(correct_adrian == correct_bruno && correct_bruno > correct_goran) {
        cout << correct_adrian << endl << "Adrian" << endl << "Bruno";
    } else if(correct_adrian == correct_goran && correct_goran > correct_bruno) {
        cout << correct_adrian << endl << "Adrian" << endl << "Goran";
    } else if(correct_bruno == correct_goran && correct_bruno > correct_adrian) {
        cout << correct_bruno << endl << "Bruno" << endl << "Goran";
    } else if(correct_adrian > correct_bruno && correct_adrian > correct_goran) {
        cout << correct_adrian << endl << "Adrian";
    } else if(correct_bruno > correct_adrian && correct_bruno > correct_goran) {
        cout << correct_bruno << endl << "Bruno";
    } else {
        cout << correct_goran << endl << "Goran";
    }
}