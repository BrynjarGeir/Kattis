#include <iostream>
using namespace std;

int main() {
    int N;
    double A_vacc = 0, A_pla = 0, B_vacc = 0, B_pla = 0, C_vacc = 0, C_pla = 0, N_vacc = 0, N_pla = 0;
    string line;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> line;
        if (line.at(0) == 'Y') {
            N_vacc++;
            if(line.at(1) == 'Y') {
                A_vacc++;
            }
            if(line.at(2) == 'Y') {
                B_vacc++;
            }
            if(line.at(3) == 'Y') {
                C_vacc++;
            }
        } else {
            N_pla++;
            if (line.at(1) == 'Y') {
                A_pla++;
            }
            if(line.at(2) == 'Y') {
                B_pla++;
            }
            if(line.at(3) == 'Y') {
                C_pla++;
            }
        }
    }

    double Vacc_A, Pla_A, Vacc_B, Pla_B, Vacc_C, Pla_C;

    Vacc_A = A_vacc / N_vacc;
    Pla_A = A_pla / N_pla;
    Vacc_B = B_vacc / N_vacc;
    Pla_B = B_pla / N_pla;
    Vacc_C = C_vacc / N_vacc;
    Pla_C = C_pla / N_pla;

    if(Vacc_A < Pla_A) cout << (1 - Vacc_A / Pla_A) * 100 << endl;
    else cout << "Not Effective" << endl;
    if(Vacc_B < Pla_B) cout << (1 - Vacc_B / Pla_B) * 100 << endl;
    else cout << "Not Effective" << endl;
    if(Vacc_C < Pla_C) cout << (1 - Vacc_C / Pla_C) * 100;
    else cout << "Not Effective";


}