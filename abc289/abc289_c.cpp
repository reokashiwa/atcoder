#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 10))
    exit(1);
  if ((M < 1) || (M > 10))
    exit(1);
  vector<vector<int>> S;
  vector<bool> s(M, false);

  rep (i, M) {
    int c;
    cin >> c;
    if ((c < 1) || (c > N))
      exit(1);
    vector<int> A;  
    rep (i, c) {
      int a;
      cin >> a;
      if ((a < 1) || (a > N))
	exit(1);
      A.push_back(a);
    }
    S.push_back(A);
  }

  vector<vector<int>> seq;
  for (int l = 1; l < M; l++) {
    vector<int> comb;
    int leng = l;
    while (leng > 0) {
      rep (i, N) {
      }
    }
  }
}
