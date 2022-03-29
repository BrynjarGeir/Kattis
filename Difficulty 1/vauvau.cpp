#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, P, M, G;
    cin >> A >> B >> C >> D >> P >> M >> G;

    bool PA = false, PC = false, MA = false, MC = false, GA = false, GC = false;

    int AB_before_P = P / (A + B), AB_before_M = M / (A + B), AB_before_G = G / (A + B);
    int CD_before_P = P / (C + D), CD_before_M = M / (C + D), CD_before_G = G / (C + D);

    int Pa = P - AB_before_G * (A + B), Pc = P - CD_before_P;
    if(Pa - A <= 0) PA = true;
    if(Pc - C <= 0) PC = true;
    int Ma = M - AB_before_M * (A + B), Mc = M - CD_before_M;
    if(Ma - A <= 0) MA = true;
    if(Mc - C <= 0) MC = true;
    int Ga = G - AB_before_G * (A + B), Gc = G - CD_before_G;
    if(Ga - A <= 0) GA = true;
    if(Gc - C <= 0) GC = true;

    if(PA && PC) cout << "both" << endl;
    else if(PA || PC) cout << "one" << endl;
    else cout << "none" << endl;

    if(MA && MC) cout << "both" << endl;
    else if(MA || MC) cout << "one" << endl;
    else cout << "none" << endl;

    cout << Ga << '-' << A << ' ' << Gc  << '-' << C << endl;

    if(GA && GC) cout << "both";
    else if(GA || GC) cout << "one";
    else cout << "none";
}