#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int l;
    string note;
    cin >> l;
    string first[l], second[l];
    map<string, int> notes = {{"C", 1}, {"C#", 2}, {"D", 3}, {"D#", 4}, {"E", 5}, {"F", 6}, {"F#", 7}, {"G", 8}, {"G#", 9}, {"A", 10}, {"A#", 11}, {"B", 12}};

    for(int i = 0; i < l; i++) {
        cin >> first[i];
    }

    for(int i = 0; i < l; i++) {
        cin >> second[l];   
    }

    bool transp = true;
    int n;
    if(notes[second[0]] >= notes[first[0]]) n = notes[second[0]] - notes[first[0]];
    else n = 12 - notes[first[0]] + notes[second[0]];
    for(int i = 1; i < l; i++) {
        if(notes[second[i]] > notes[first[i]]) {
            if (notes[second[i]] - notes[first[i]] != n) {
                transp = false;
                break;
            }
        } else if(12 - notes[second[i]] + notes[first[i]] != n){
            transp = false;
            break;
        }
    }

    if(transp) {
        cout << "Transposition";
        return 0;
    }


    reverse(first, first + l);

    bool retro = true;

    for(int i = 0; i < l; i++) {
        if(first[i] != second[i]) {
            retro = false;
            break;
        }
    }

    if(retro) {
        cout << "Retrograde";
        return 0;
    }


    

    
}