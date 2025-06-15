#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 2) || (N > 10e6))
    exit(1);
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<pair<int, int>> P;
  P.push_back(make_pair(1, 0));
  rep (i, Q) {
    int qn;
    cin >> qn;
    if (qn == 1) {
      char C;
      cin >> C;
      pair<int, int> p;
      int steps = P.size() - 1;
      if (C == 'R')
	p = make_pair(P[steps].first + 1, P[steps].second);
      else if (C == 'L')
	p = make_pair(P[steps].first - 1, P[steps].second);
      else if (C == 'U')
	p = make_pair(P[steps].first, P[steps].second + 1);
      else if (C == 'D')
	p = make_pair(P[steps].first, P[steps].second - 1);
      else
	exit(1);
      P.push_back(p);
    } else if (qn == 2) {
      int p;
      cin >> p;
      if ((p < 1) || (p > 10e6))
	exit(1);
      int steps = P.size() - 1;
      if (steps - p >= 0) {
	cout << P[steps - p + 1].first << " " << P[steps - p + 1].second << endl;
      } else {
	cout << p - steps << " 0" << endl;
      }
    } else
      exit(1);
  }
  return 0;
}
