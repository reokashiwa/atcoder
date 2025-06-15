#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 30))
    exit(1);
  if ((M < 1) || (M > 30))
    exit(1);

  vector<string> S(N);
  rep(i, N) {
    string s;
    cin >> s;
    if (s.size() != M)
      exit(1);
    rep(j, M) {
      if ((s[j] != 'o') && (s[j] != 'x'))
	exit(1);
    }
    S[i] = s;
  }

  int l = 0;
  rep(i, N - 1) {
    rep(j, N - 1 - i) {
      bool flag = true;
      rep(k, M) {
	if ((S[i][k] == 'x') && (S[i + j + 1][k] == 'x')) {
	  flag = false;
	  break;
	}
      }
      if (flag == true)
	l++;
    }
  }
  cout << l << endl;
}
