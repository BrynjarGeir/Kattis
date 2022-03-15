#include <iostream>
using namespace std;

int main() {
    int N, B, H, W, p, b;
    cin >> N >> B >> H >> W;
    int cheapest = INT32_MAX;
    bool something_available = false;

    for(int i = 0; i < H; i++) {
        cin >> p;
        bool enough_rooms = false;
        for(int j = 0; j < W; j++) {
            cin >> b;
            if(b >= N) {
                enough_rooms = true;
                something_available = true;
                break;
            }
        }
        if(enough_rooms) {
            cheapest = min(cheapest, N*p);
        }
    }

    if(something_available && cheapest <= B) cout << cheapest;
    else cout << "stay home";
}