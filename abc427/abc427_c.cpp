#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 10))
    exit(1);
  if ((M < 1) || (M > N * (N - 1) / 2))
    exit(1);
  vector<pair<int, int>> uv(M);
  rep (i, M) {
    int u, v;
    cin >> u >> v;
    if ((u < 1) || (u > N))
      exit(1);
    if ((v < 1) || (v > N))
      exit(1);
    pair<int, int> p;
    u--; v--;
    p = make_pair(u, v);
    uv[i] = p;
  }

  // bit列によるN個全探索
  int m = M;
  for (int bit = 0; bit < 1 << N; ++bit) {
    rep (i, N)
      cout << (bit >> i);
    cout << endl;
    int count = 0;
    rep (i, M) {
      cout << uv[i].first << " - " << uv[i].second << endl;
      cout << (1 & (bit >> uv[i].first)) << ", " << (1 & (bit >> uv[i].first)) << endl;
      if ((bit >> uv[i].first) == (bit >> uv[i].second))
	count++;
    }
    cout << count << endl;
    m = min(m, count);
  }
  cout << m << endl;
  return 0;
}
