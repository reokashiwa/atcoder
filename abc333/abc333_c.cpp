#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 333))
    exit(1);
  int i = 1, n = 1;
  while (true) {
    if ((N >= n) && (N <= n + (i + 1) * (i + 2) / 2)) {
      i++;
      break;
    } else {
      n = n + (i + 1) * (i + 2) / 2;
      i++;
    }
  }
  vector<int> r;
  rep (j, i) {
    if (j == 0)
      r.push_back(1);
    else
      r.push_back(r[j - 1] * 10 + 1);
  }
  rep (i, r.size()) {
    cout << r[i] << endl;
  }
  int count = 0;
  rep (i, r.size()) {
    rep (j, i + 1) {
      rep (k, j + 1) {
	rep (l, k + 1) {
	  cout << count << ": " << r[j] << ", " << r[k] << ", " << r[l] << ": " << r[j] + r[k] + r[l] << endl;
	  if (count == N - 1) {
	    return 0;
	  }
	  count++;
	}
      }
    }
  }
  return 0;
}
