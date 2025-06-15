#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int calc(int N, int K, vector<vector<int>> a) {
  long long s, t;
  cin >> s >> t;
  if ((s < 1) || (s > (long) N * (long) K))
    exit(1);
  if ((t < 1) || (t > (long) N * (long) K))
    exit(1);
  s--;
  s = s % N;
  t--;
  t = t % N;
  vector<int> hop(N, -1);
  hop[s] = 0;
  int num = 0;
  bool flag = true;
  while (flag) {
    num++;
    flag = false;
    rep (i, N) {
      if (hop[i] == num - 1) {
	flag = true;
	rep (j, N) {
	  if (a[i][j] == 1) {
	    if (hop[j] == -1)
	      hop[j] = num;
	    if (t == j)
	      return num;
	  }
	}
      }
    }
  }
  return -1;
}

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 10e9))
    exit(1);
  vector<vector<int>> a(N, vector<int>(N));
  rep (i, N) {
    rep (j, N) {
      int A;
      cin >> A;
      if ((A != 0) && (A != 1))
	exit(1);
      a[i][j] = A;
    }
  }

  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 100))
    exit(1);
  rep (i, Q) {
    cout << calc(N, K, a) << endl;
  }
}
