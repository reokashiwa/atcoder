#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, D;
  long P;
  cin >> N >> D >> P;
    if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((D < 1) || (D > 2 * 10e5))
    exit(1);
  if ((P < 1) || (P > 10e9))
    exit(1);
  vector<long> F(N);
  rep (i, N) {
    long f;
    cin >> f;
    if ((f < 1) || (f > 10e9))
      exit(1);
    F[i] = f;
  }
  sort(F.begin(), F.end());
  int right = N - 1;
  long total = 0;
  while (true) {
    int left;
    long sum = 0;
    if (right - D < 0)
      left = 0;
    else
      left = right - D + 1;
    for (int i = left; i <= right; i++)
      sum = sum + F[i];
    if (sum > P) {
      total = total + P;
      if (left <= 0)
	break;
      else
	right = right - D;
    } else {
      long res = 0;
      rep (i, right + 1)
	res = res + F[i];
      total = total + res;
      break;
    }
  }
  cout << total << endl;
}
