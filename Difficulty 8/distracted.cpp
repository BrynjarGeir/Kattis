#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, L;
    string name;
    char st;
    cin >> N >> L;

    map<string, char> status;
    bool mu = false, dont_know = false;

    for(int i = 0; i < N; i++) {
        cin >> name >> st;
        status[name] = st;
    }

    string looking, arrow, looked_at;

    for(int i = 0; i < L; i++) {
        cin >> looking >> arrow >> looked_at;
        if(status[looking] == 'm' && status[looked_at] == 'u') mu = true;
        else if((status[looking] == 'm' || status[looking] == '?') && (status[looked_at] == 'u' || status[looked_at] == '?')) dont_know = true;
    }

    if(mu) cout << 1;
    else if(dont_know) cout << '?';
    else cout << 0;
}