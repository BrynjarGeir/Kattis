#include <iostream>
#include <set>
using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    set<int> numbers;

    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

    numbers.insert(a % 42);
    numbers.insert(b % 42);
    numbers.insert(c % 42);
    numbers.insert(d % 42);
    numbers.insert(e % 42);
    numbers.insert(f % 42);
    numbers.insert(g % 42);
    numbers.insert(h % 42);
    numbers.insert(i % 42);
    numbers.insert(j % 42);

    cout << numbers.size();

}