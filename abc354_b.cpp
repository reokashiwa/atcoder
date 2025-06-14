#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<string> S(N);
  int tc = 0;
  rep (i, N) {
    string s;
    int c;
    cin >> s >> c;
    if ((s.size() < 3) || (s.size() > 16))
      exit(1);
    if ((c < 1) || (c > 4229))
      exit(1);
    rep (j, i) {
      if (S[j] == s)
	exit(1);
    }
    S[i] = s;
    tc = tc + c;
  }
  sort(S.begin(), S.end());
  cout << S[tc % N] << endl;
  return 0;
}
