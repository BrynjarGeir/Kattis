#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, string> notes;
  notes["A#"] = "Bb";
  notes["Bb"] = "A#";
  notes["C#"] = "Db";
  notes["Db"] = "C#";
  notes["D#"] = "Eb";
  notes["Eb"] = "D#";
  notes["F#"] = "Gb";
  notes["Gb"] = "F#";
  notes["G#"] = "Ab";
  notes["Ab"] = "G#";
  string note, tone;
  int t = 1;
  while (cin >> note >> tone) {
    cout << "Case " << t++ << ": ";
    if (notes.count(note)) {
      cout << notes[note] << " " << tone << endl;
    } else {
      cout << "UNIQUE" << endl;
    }
  }
  return 0;
}