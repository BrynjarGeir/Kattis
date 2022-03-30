#include <iostream>
#include <map>
using namespace std;

map<char, int> pop_map() {
    map<char, int> arr;
    arr[' '] = 0;
    arr['!'] = 9;
    arr['"'] = 6;
    arr['#'] = 24;
    arr['$'] = 29;
    arr['%'] = 22;
    arr['&'] = 24;
    arr['\''] = 3;
    arr['('] = 12;
    arr[')'] = 12;
    arr['*'] = 17;
    arr['+'] = 13;
    arr[','] = 7;
    arr['-'] = 7;
    arr['.'] = 4;
    arr['/'] = 10;
    arr['0'] = 22;
    arr['1'] = 19;
    arr['2'] = 22;
    arr['3'] = 23;
    arr['4'] = 21;
    arr['5'] = 27;
    arr['6'] = 26;
    arr['7'] = 16;
    arr['8'] = 23;
    arr['9'] = 26;
    arr[':'] = 8;
    arr[';'] = 11;
    arr['<'] = 10;
    arr['='] = 14;
    arr['>'] = 10;
    arr['?'] = 15;
    arr['@'] = 32;
    arr['A'] = 24;
    arr['B'] = 29;
    arr['C'] = 20;
    arr['D'] = 26;
    arr['E'] = 26;
    arr['F'] = 20;
    arr['G'] = 25;
    arr['H'] = 25;
    arr['I'] = 18;
    arr['J'] = 18;
    arr['K'] = 21;
    arr['L'] = 16;
    arr['M'] = 28;
    arr['N'] = 25;
    arr['O'] = 26;
    arr['P'] = 23;
    arr['Q'] = 31;
    arr['R'] = 28;
    arr['S'] = 25;
    arr['T'] = 16;
    arr['U'] = 23;
    arr['V'] = 19;
    arr['W'] = 26;
    arr['X'] = 18;
    arr['Y'] = 14;
    arr['Z'] = 22;
    arr['['] = 18;
    arr['\\'] = 10;
    arr[']'] = 18;
    arr['^'] = 7;
    arr['_'] = 8;
    arr['`'] = 3;
    arr['a'] = 23;
    arr['b'] = 25;
    arr['c'] = 17;
    arr['d'] = 25;
    arr['e'] = 23;
    arr['f'] = 18;
    arr['g'] = 30;
    arr['h'] = 21;
    arr['i'] = 15;
    arr['j'] = 20;
    arr['k'] = 21;
    arr['l'] = 16;
    arr['m'] = 22;
    arr['n'] = 18;
    arr['o'] = 20;
    arr['p'] = 25;
    arr['q'] = 25;
    arr['r'] = 13;
    arr['s'] = 21;
    arr['t'] = 17;
    arr['u'] = 17;
    arr['v'] = 13;
    arr['w'] = 19;
    arr['x'] = 13;
    arr['y'] = 24;
    arr['z'] = 19;
    arr['{'] = 18;
    arr['|'] = 12;
    arr['}'] = 18;
    arr['~'] = 9;
    return arr;
}

int main() {
    map<char, int> toner = pop_map();
    string line;

    while(getline(cin, line)) {
        int cost = 0;
        for(auto c: line) cost += toner[c];
        cout << cost << endl;
    }

}