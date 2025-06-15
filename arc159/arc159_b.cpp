#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

/*
int gcd(long long a, long long b) {
  if (a % b == 0)
    return b;
  else {
    return (gcd(b, a % b));
  }
}
*/

int main() {
  long long A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 10e12))
    exit(1);
  if ((B < 1) || (B > 10e12))
    exit(1);

  long long a = A;
  long long b = B;
  long long g;
  long long num = 0;
  while (true) {
    num++;
    g = gcd(a, b);
    // cout << g << endl;
    a = a - g;
    b = b - g;
    if ((a == 0) || (b == 0)) {
      cout << num;
      return 0;
    }
  }
}
