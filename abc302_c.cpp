#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dfs(int N, vector<vector<int>> D, vector<int> P) {
  int h = P[P.size() - 1];
  rep (i, N) {
    if (D[h][i] == 1) {
      bool flag = false;
      rep (j, P.size()) {
	if (i == P[j]) {
	  flag = true;
	  break;
	}
      }
      if (flag)
	continue;

      P.push_back(i);
      if (P.size() == N)
	return 0;
      else {
	if (dfs(N, D, P) == 0)
	  return 0;
	else
	  P.pop_back();
      }
    }
  }
  P.pop_back();
  return 1;
}

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 8))
    exit(1);
  if ((M < 1) || (M > 5))
    exit(1);
  vector<string> S(N);
  vector<vector<int>> D(N, vector<int> (N, 0));
  rep (i, N) {
    string s;
    cin >> s;
    if (s.size() != M)
      exit(1);
    rep (j, M) {
      if ((s[j] < 'a') || (s[j] > 'z'))
	exit(1);
    }
    rep (j, i) {
      int d = 0;      
      rep (k, M) {
	if (s[k] != S[j][k])
	  d++;
      }
      if (d == 0)
	exit(1);
      D[j][i] = d;
      D[i][j] = d;
    }
    S[i] = s;
  }

  vector<int> P;
  rep (i, N - 1) {
    P.push_back(i);
    if (dfs(N, D, P) == 0) {
      cout << "Yes" << endl;
      return 0;
    } else
      P.pop_back();
  }
  cout << "No" << endl;
}
