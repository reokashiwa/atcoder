#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 99))
    exit(1);
  if (N % 2 == 0)
    exit(1);
  if ((M < 1) || (M > 100))
    exit(1);
  vector<string> S(N);
  vector<int> P(N, 0);
  rep (i, N) {
    string s;
    cin >> s;
    rep (j, M) {
      if ((s[j] != '0') && (s[j] != '1'))
	exit(1);
      S[i] = s;
    }
  }
  rep (i, M) {
    int x = 0, y = 0;
    rep (j, N) {
      if (S[j][i] == '0')
	x++;
      else
	y++;
    }
    if ((x == 0) || (y == 0))
      rep (j, N) P[j]++;
    else if (x < y) {
      rep (j, N)
	if (S[j][i] == '0') P[j]++;
    } else {
      rep (j, N)
	if (S[j][i] == '1') P[j]++;
    }
  }
  int max = 0;
  rep (i, N) {
    if (P[i] > max)
      max = P[i];
  }
  rep (i, N) {
    if (P[i] == max)
      cout << i + 1 << " ";
  }
  cout << endl;
}
