#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if(a == 0) return b;
  else if (b == 0) return a;
  else if (a < b) return gcd(a, b % a);
  else return gcd(b, a % b);
}

pair<int, int> decimalToFraction(double number) {
  double intVal = floor(number);
  double fVal = number - intVal;
  const long pVal = 1000000000;
  long long gcdVal = gcd(round(fVal * pVal), pVal);
  long long num = round(fVal * pVal) / gcdVal;
  long long deno = pVal / gcdVal;

  return make_pair(intVal*deno + num, deno);
}

int main() {
  double p, q, current, next;
  int P, K;
  char slash;

  cin >> P;

  while(P--) {
    cin >> K >> p >> slash >> q;
    current = p / q;
    next = 1 / (2 * floor(current) - current + 1);
    pair<int, int> nxt = decimalToFraction(next);
    cout << K << " " << nxt.first << "/" << nxt.second;
    if(P) cout << endl;
  }
}