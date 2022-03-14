#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A_marked[n];
    for(int i = 0; i < n; i++) {
        cin >> A_marked[i];
    }

    int possibilities = 0;
    for(int i = 0; i < n; i++) {
        bool smaller_ok = true, larger_ok = true;
        for(int j = i-1; j >= 0; j--) {
            if(A_marked[i] < A_marked[j]) {
                smaller_ok = false;
                break;
            }
        }
        for(int j = i+1; j < n; j++) {
            if(A_marked[i] >= A_marked[j]) {
                larger_ok = false;
                break;
            }
        }
        if(larger_ok && smaller_ok) possibilities++;
    }

    cout << possibilities;
}