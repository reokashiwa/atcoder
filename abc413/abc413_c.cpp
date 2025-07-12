#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<pair<int64_t, int64_t>> A;
  int64_t offset = 0;
  rep (i, Q) {
    int j;
    cin >> j;
    if ((j != 1) && (j != 2))
      exit(1);
    if (j == 1) {
      pair<int64_t, int64_t> p;
      int64_t c, x;
      cin >> c >> x;
      if ((c < 1) || (c > 10e9))
	exit(1);
      if ((x < 1) || (x > 10e9))
	exit(1);
      p = make_pair(c, x);
      A.push_back(p);
    } else { // j == 2
      int64_t k;
      cin >> k;
      if ((k < 1) || (k > 10e9))
	exit(1);
      int64_t lower = offset;
      offset = offset + k;
      int64_t sum = 0;
      int m = 0;
      while (m < A.size()) {
	if (lower - A[m].first > 0)
	  lower = lower - A[m].first;
	else
	  break;
	m++;
      }
      if (lower + k <= A[m].first) {
	sum = A[m].second * k;
      } else {
	sum = A[m].second * (A[m].first - lower);
	k = k - (A[m].first - lower);
	m++;
	while (k > 0) {
	  if (k >= A[m].first) {
	    sum = sum + A[m].first * A[m].second;
	    m++;
	  } else
	    sum = sum + k * A[m].second;
	  k = k - A[m].first;
	}
      }
      cout << sum << endl;
    }
  }
}


