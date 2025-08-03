#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dfs(vector<string>& A, const vector<string>& S, string cur, int count, int K) {
  if (count == K) {
    A.push_back(cur);
    return 0;
  }
  rep (i, S.size())
    dfs(A, S, cur + S[i], count + 1, K);
  return 0;
}

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  if ((N < 1) || (N > 10))
    exit(1);
  if ((K < 1) || (K > 5))
    exit(1);
  if ((X < 1) || (X > pow(N, K)))
    exit(1);
  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if ((s.size() < 1) || (s.size() > 10))
      exit(1);
    rep (j, s.size()) {
      if ((s[j] < 'a') || (s[j] > 'z'))
	exit(1);
    }
    S[i] = s;
  }
  vector<string> A;
  dfs(A, S, "", 0, K);
  sort(A.begin(), A.end());
  cout << A[X - 1] << endl;
}
