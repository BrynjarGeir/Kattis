#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        bool works = true;
        for(int j = 0; j < m; j++) {
            string s;
            cin >> s;

            for(int k = 1; k < s.size(); k++) {
                if(s[k] != tolower(s[k])) {
                    works = false;
                }
            }
        }
        if(works) {
            ans++;
        }
    }
    cout << ans << endl;
}
