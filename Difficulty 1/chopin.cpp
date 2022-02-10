#include <iostream>
#include <map>
using namespace std;

int main() {
    string note;
    int case_number = 1;
    map<string, string> alternate_keys = {{"Ab minor", "G# minor"}, {"A# major", "Bb major"}, {"A# minor", "Bb minor"}, {"C# major", "Db major"}, {"Db minor", "C# minor"}, {"D# major", "Eb major"}, {"D# minor", "Eb minor"}, {"Gb major", "F# major"}, {"Gb minor", "F# minor"}, {"G# major", "Ab major"}};

    while(getline(cin, note) && case_number != 6) {
        if (note.empty()) break;
        if (alternate_keys.find(note) != alternate_keys.end()) {
           cout << "Case " << case_number << ": " << alternate_keys[note] << endl;;
        } else {
            cout << "Case " << case_number << ": UNIQUE" << endl; 
        }
        case_number++;
    }
}