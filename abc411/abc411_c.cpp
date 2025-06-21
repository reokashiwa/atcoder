#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 5 * 10e5))
    exit(1);
  if ((Q < 1) || (Q > 5 * 10e5))
    exit(1);
  vector<pair<int, int>> P;
  rep(i, Q) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    a = a - 1;
    rep(j, P.size()) {
      if ((a >= P[j].first - 1) && (a <= P[j].first + P[j].second)) {
	if (a == P[j].first - 1) {
	  P[j].first = P[j].first + 1;
	} else if (a == P[j].first + P[j].second) {
	  P[j].second = P[j].second + 1;
	} else if (a == P[j].first) {
	  P[j].first = P[j].first + 1;
	  P[j].second = P[j].second - 1;
	} else if (a == P[j].first + P[j].second - 1) {
	  P[j].second = P[j].second - 1;
	} else if {
	  pair<int, int> p;
	  p = make_pair(a + 1, P[j].first + P[j].second - 1 - (a + 1) + 1);
	  P.push_back(p);
	  P[j].second = a - P[j].first + 1;
	}
	break;
      } else {
	p = make_pair(a, 1);
	P.push_back(p);
      }
    }
  }
}
