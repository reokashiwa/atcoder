#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 100))
    exit(1);
  if (N < K)
    exit(1);
  vector<string> S(N);

  rep (i, N) {
    string s;
    cin >> s;
    if (s.size() > 10)
      exit(1);
    rep (j, i) {
      if (S[i] == s)
	exit(1);
    }
    S[i] = s;
  }
  for (int i = K; i < N; i++) {
    S.pop_back();
  }
  sort(S.begin(), S.end());
  rep (i, K) {
    cout << S[i] << endl;
  }
}
