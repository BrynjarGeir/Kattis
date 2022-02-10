#include <iostream>
#include <set>
using namespace std;

int main() {
    int w, p, part;
    set<int> sizes, partitions;
    cin >> w >> p;

    for(int i = 0; i < p; i++) {
        cin >> part;
        partitions.insert(part);
    }

    

}