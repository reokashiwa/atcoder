#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 10e18))
    exit(1);
  if ((B < 1) || (B > 10e18))
    exit(1);
  long long n = 0;
  while (A != B) {
    long long diff = abs(A - B);
    if (A > B) {
      A = diff;
      n++;
      if (B % A == 0) {
	n = n + (A / B) - 1;
	B = diff;
      } else {
	n = n + (long long) (B / A);
	B = diff;
	A = B % diff;
      }
    } else {
      B = diff;
      n++;
      if (A % B == 0) {
	n = n + (B / A) - 1;
	A = diff;
      } else {
	n = n + (long long) (B / A);
	A = diff;
	B = A % diff;
      }
    }
  }
  cout << n << endl;
}
