#include <iostream>
using namespace std;

int main() {
    int G, S, C, total;
    string vc, tc;

    cin >> G >> S >> C;

    G *= 3;
    S *= 2;

    total = G + S + C;

    if (total >= 8) {
        vc = "Province";
    } else if (total >= 5) {
        vc = "Duchy";
    } else if (total >= 2) {
        vc = "Estate";
    } else {
        vc = "";
    }

    if (total >= 6) {
        tc = "Gold";
    } else if (total >= 3) {
        tc = "Silver";
    } else {
        tc = "Copper";
    }

    if (vc == "") {
        cout << tc;
    } else {
        cout << vc << " or " << tc;
    }

}