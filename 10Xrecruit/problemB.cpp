#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T;
    double x1,y1,z1,r1,vx1,vy1,vz1,x2,y2,z2,r2,vx2,vy2,vz2, dist1, dist2;
    double a, b, c, dx, dy, dz, dvx, dvy, dvz, under_root, R, root_1, root_2;
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> x1 >> y1 >>z1 >> r1 >> vx1 >> vy1 >> vz1;
        cin >> x2 >> y2 >>z2 >> r2 >> vx2 >> vy2 >> vz2;

        dist1 = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1 - z2, 2));
        dist2 = sqrt(pow(x1 + vx1 - x2 - vx2, 2) + pow(y1 + vy1 - y2 - vy2, 2) + pow(z1 + vz1 - z2 - vz2, 2));
        if (dist1 > r1 + r2 && dist2 >= dist1) cout << "No collision";
        else {
            dx = x1 - x2, dy = y1 - y2, dz = z1 - z2;
            dvx = vx1 - vx2, dvy = vy1 - vy2, dvz = vz1 - vz2;
            R = r1 + r2;
            a = pow(dvx, 2) + pow(dvy, 2) + pow(dvz, 2);
            b = 2 * (dx * dvx + dy * dvy + dy * dvy + dz * dvz);
            c = pow(dx, 2) + pow(dy, 2) + pow(dz, 2) - pow(R, 2);

            under_root = pow(b/a, 2) - 4 * c / a;
            if (under_root < 0) cout << "No collision";
            else {
                root_1 = (-b/a - sqrt(under_root)) / 2;
                root_2 = (-b/a + sqrt(under_root)) / 2;

                if (root_1 >= 0) cout << root_1;
                else if(root_2 >= 0) cout << root_2;
                else cout << "No collision";
            }
        }

        if(i != T-1) cout << endl;        
    }
}