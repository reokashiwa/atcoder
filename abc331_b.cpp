#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  if ((N < 1) || (N > 100))
    exit(1);

  if ((S < 1) || (S > 10e4))
    exit(1);
  if ((M < 1) || (M > 10e4))
    exit(1);
  if ((L < 1) || (L > 10e4))
    exit(1);

  int smax;
  if (N % 6 == 0)
    smax = N / 6;
  else
    smax = N / 6 + 1;
  int mincost;
  rep (s, smax + 1) {
    int c = s * S;
    int n = N - s * 6;
    int mmax;
    if (n % 8 == 0)
      mmax = n / 8;
    else
      mmax = n / 8 + 1;
    rep (m, mmax + 1) {
      int mc = c + m * M;
      int mn = n - m * 8;
      int l;
      if (mn % 12 == 0)
	l = mn / 12;
      else
	l = mn / 12 + 1;
      mc = mc + l * L;
      if ((s == 0 && m ==0) || (mc < mincost))
	mincost = mc;
    }
  }

  cout << mincost << endl;
  return 0;
}
