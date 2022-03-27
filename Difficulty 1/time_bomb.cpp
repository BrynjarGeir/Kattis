#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

bool cmp2dchar(char first[5][3], char second[5][3]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(first[i][j] != second[i][j]) {
                cout << i << " " << j << " " << first[i][j] << " " << second[i][j] << " what is happening!" << endl;                
                return false;
            }
        }
    }
    return true;
}

int main() {
    string line;
    getline(cin, line);
    int n = line.size();
    char symbols[5][n];
    char zero[5][3] = {{'*','*','*'}, {'*', ' ', '*'}, {'*', ' ', '*'}, {'*', ' ', '*'}, {'*', '*', '*'}}, one[5][3] = {{' ', ' ',  '*'}, {' ', ' ', '*'}, {' ', ' ', '*'}, {' ', ' ', '*'}, {' ', ' ', '*'}}, two[5][3] = {{'*','*','*'}, {' ', ' ', '*'}, {'*','*','*'}, {'*',' ',' '}, {'*','*','*'}}, three[5][3] = {{'*','*','*'}, {' ',' ','*'}, {'*','*','*'}, {' ', ' ', '*'}, {'*','*','*'}}, four[5][3] = {{'*',' ','*'}, {'*',' ','*'}, {'*','*','*'}, {' ', ' ','*'}, {' ', ' ', '*'}}, five[5][3] = {{'*','*','*'}, {'*',' ', ' '}, {'*','*','*'}, {' ',' ','*'}, {'*','*','*'}}, six[5][3] = {{'*','*','*'}, {'*',' ',' '}, {'*','*','*'}, {'*',' ','*'}, {'*','*','*'}}, seven[5][3] = {{'*','*','*'}, {' ',' ','*'}, {' ',' ','*'}, {' ',' ','*'}, {' ',' ','*'}}, eight[5][3] = {{'*','*','*'}, {'*',' ','*'}, {'*','*','*'}, {'*',' ','*'}, {'*','*','*'}}, nine[5][3] = {{'*','*','*'}, {'*',' ','*'}, {'*','*','*'}, {' ',' ','*'}, {'*','*','*'}};

    for(int i = 0; i < 5; i++) {
        if(i != 0) getline(cin, line);
        for(int j = 0; j < n; j++) {
            symbols[i][j] = line.at(j);
        }
    }

    int pos = 0, number = 0;
    while(pos < n) {
        char curr_symbol[5][3];
        for(int i = 0; i < 5; i++) {
            for(int j = pos; j < pos + 3; j++) {
                curr_symbol[i][j-pos] = symbols[i][j];
            }
        }
        bool is_number = false;
        if(cmp2dchar(curr_symbol, zero)) {
            is_number = true;
        } else if(cmp2dchar(curr_symbol, one)) {
            is_number = true;
            number += 1;
        } else if(cmp2dchar(curr_symbol, two)) {
            is_number = true;
            number += 2;
        } else if(cmp2dchar(curr_symbol, three)) {
            is_number = true;
            number += 3;
        } else if(cmp2dchar(curr_symbol, four)) {
            is_number = true;
            number += 4;
        } else if(cmp2dchar(curr_symbol, five)) {
            is_number = true;
            number += 5;
        } else if(cmp2dchar(curr_symbol, six)) {
            is_number = true;
            number += 6;
        } else if(cmp2dchar(curr_symbol, seven)) {
            is_number = true;
            number += 7;
        } else if(cmp2dchar(curr_symbol, eight)) {
            is_number = true;
            number += 8;
        } else if(cmp2dchar(curr_symbol, nine)) {
            is_number = true;
            number += 9;
        }

        if(!is_number) {
            cout << cmp2dchar(curr_symbol, zero) << endl;
            cout << "BOOM!!" << endl;
            return 0;
        }
        number *= 10;
        pos += 4;
    }

    if(number % 6 == 0) {
        cout << "BEER!!";
    } else {
        cout << "BOOM!!";
    }
}