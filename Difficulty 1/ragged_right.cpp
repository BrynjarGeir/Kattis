#include <iostream>
#include <vector>
using namespace std;

int main() {
    string line;
    vector<string> paragraph;
    int penalty = 0, longest = 0, size, p;

    while(getline(cin, line)) {
        if (line.empty()) break;
        paragraph.push_back(line);
    }

    for(string l:paragraph) {
        size = l.size(); 
        longest = max(size, longest);
    }

    paragraph.pop_back();

    for(string l: paragraph) {
        size = l.size();
        p = (longest - size) * (longest - size);
        penalty += p;
    }
    cout << penalty;
}