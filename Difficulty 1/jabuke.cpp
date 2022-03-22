#include <iostream>
using namespace std;

struct fPoint {
    int x;
    int y;
};

float sign (fPoint p1, fPoint p2, fPoint p3) {
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}
bool PointInTriangle (fPoint pt, fPoint v1, fPoint v2, fPoint v3) {
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

int main() {
    int x1, y1, x2, y2, x3, y3, n, x, y, inside = 0;
    double area;
    fPoint v1, v2, v3;
    v1.x = x1, v1.y = y1, v2.x = x2, v2.y = y2, v3.x = x3, v3.y = y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        fPoint pt;
        pt.x = x, pt.y = y;
        if(PointInTriangle(pt, v1, v2, v3)) inside++;

    }

    area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1 - y2)) * 0.5;

    cout << fixed << area << endl;
    cout << inside;
}