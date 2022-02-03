#include <iostream>
#include <string>
#include <vector>

using namespace std;

string offset(int N, string ord);
int position(string n);
int rightNumber(int N, int pos);
string reverseTexti(string ord);

static vector<string> alph = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W","X", "Y", "Z", "_", "."};

int main() {
    int N;
    string texti, nyrtexti;
    while(cin >> N >> texti) {
        nyrtexti = reverseTexti(texti);
        cout << offset(N, nyrtexti) << "\n";
        nyrtexti = "";
    }
}
