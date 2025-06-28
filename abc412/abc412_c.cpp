#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 10e5))
    exit(1);
  rep (i, T) {
    int N;
    cin >> N;
    if ((N < 2) || (N > 2 * 10e5))
      exit(1);
    vector<int> S(N);
    rep (j, N) {
      int s;
      cin >> s;
      if ((s < 1) || (s > 10e9))
	exit(1);
      S[j] = s;
    }
    sort(S.begin(), S.end());
    rep (j, N) {
      cout << S[j] << " ";
    }
    cout << endl;
    int n = 1;
    bool flag = true;
    pair<int, int> k;
    k = make_pair(N - 1, S[N - 1]);
    for (int j = N - 2; j >= 0; j--) {
      if (S[j] <= k.second / 2)
	if (k.first == j + 1) flag = false;
	else {
	  k.first = j + 1;
	  k.second = S[j + 1];
	  n++;
	}
      if (! flag) break;
    }
    if (flag)
      cout << n << endl;
    else
      cout << -1 << endl;
  }
}
