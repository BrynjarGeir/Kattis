#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if(score > 180 || score == 179 || score == 178 || score == 176 || score == 175 || score == 173 || score == 172 || score == 170 || score == 169 || score == 167 || score == 166 || score == 164 || score == 163 || score == 161 || score == 155 || score == 149 || score == 143) {
        cout << "impossible";
        return 0;
    }

    if(score == 145) {
        cout << "triple 20" << endl << "triple 15" << endl << "double 15";
        return 0;
    }


    if(score == 151) {
        cout << "triple 20" << endl << "triple 15" << endl << "double 20";
        return 0;
    }

    if(score == 157) {
        cout << "triple 20" << endl << "triple 19" << endl << "double 20";
        return 0;
    }

    int count = 0;
    while(score != 0) {
        int i = 20;
        while(i != 0) {
            if(score - 3 * i >= 0) {
                cout << "triple " << i << endl;
                score -= i*3;
                break;
            } else if(score - 2 * i >= 0) {
                cout << "double " << i << endl;
                score -= 2*i;
                break;
            } else if(score - i >= 0) {
                cout << "single " << i << endl;
                score -= i;
                break;
            }

            i--;
        }
    }
}