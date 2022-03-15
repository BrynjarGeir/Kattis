#include <iostream>
using namespace std;

int main() {
    long long N, B, H, W, p, b;
    cin >> N >> B >> H >> W;
    long long cheapest = INT32_MAX;

    for(int i = 0; i < H; i++) {
        cin >> p;
        bool enough_rooms = false;
        for(int j = 0; j < W; j++) {
            cin >> b;
            if(b >= N) {
                enough_rooms = true;
                break;
            }
        }
        if(enough_rooms) {
            cheapest = min(cheapest,p);
        }
    }
    cheapest *= N;
    if(cheapest <= B) cout << cheapest;
    else cout << "stay home";
}