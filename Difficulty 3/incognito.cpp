#include <iostream>
#include <map>
using namespace std;

int main() {
    int tests, attributes;
    string type, attribute;
    cin >> tests;

    while(tests--) {
        map<string, int> numbering;
        cin >> attributes;
        while(attributes--) {
            cin >> attribute >> type;
            if(numbering.find(type) != numbering.end()) {
                numbering[type]++;
            } else {
                numbering[type] = 1;
            }
        }
        int ans = 1;
        map<string, int>::iterator nums;
        for(nums = numbering.begin(); nums != numbering.end(); nums++) {
            ans *= nums->second + 1;
        }
        cout << ans - 1 << endl;
    }
}