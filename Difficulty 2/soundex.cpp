#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, string> mapping = {{'B',"1"}, {'F', "1"}, {'P', "1"}, {'V', "1"},
                                {'C', "2"}, {'G', "2"}, {'J', "2"}, {'K', "2"}, {'Q', "2"}, {'S', "2"}, {'X', "2"}, {'Z', "2"},
                                {'D', "3"}, {'T', "3"},
                                {'L', "4"},
                                {'M', "5"}, {'N', "5"},
                                {'R', "6"}};
    string word;
    while(getline(cin, word)) {
        string converted = "", prev = "", curr;
        for(auto c: word) {
            if(prev == mapping[c]) continue;
            converted += mapping[c];
            prev = mapping[c];
        }
        cout << converted << endl;
    }

}