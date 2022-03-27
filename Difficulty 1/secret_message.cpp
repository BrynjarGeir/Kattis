#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, l;
    string em, dm;

    cin >> N;

    while(N--) {
        cin >> em;
        l = em.size();
        int m = floor(pow(ceil(sqrt(l)), 2)), n = ceil(sqrt(l)), pos = 0;
        dm = "";
        while(dm.size() != m) {
            dm += em.at(pos);
            pos += 
        }
    }
}