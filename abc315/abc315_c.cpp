#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 3 * 10e5))
    exit(1);
  vector<pair<int, int>> SF(N);
  rep (i, N) {
    int f, s;
    cin >> f >> s;
    if ((f < 1) || (f > N))
      exit(1);
    if ((s < 2) || (s > 10e9))
      exit(1);
    if ((s % 2) == 1)
      exit(1);
    SF[i] = {s, f};
  }
  sort (SF.begin(), SF.end());

  // for (auto sf : SF)
  //   cout << sf.first << " " << sf.second << endl;

  int max = 0;
  int under_limit = 0;
  rep (i, N) {
    if (SF[i].first > SF[SF.size() - 1].first / 2) {
      under_limit = i - 1;
      break;
    }
  }
  // cout << under_limit << endl;
  for (int i = N - 1; i > under_limit; i--) {
    for (int j = N - 1; j > under_limit; j--) {
      if (i == j)
	continue;
      if (SF[i].first + SF[j].first < max)
	continue;
      int v;
      if (SF[i].second == SF[j].second)
	v = SF[i].first + SF[j].first / 2;
      else
	v = SF[i].first + SF[j].first;
      if (v > max)
	max = v;
    }
  }
  cout << max << endl;
}
